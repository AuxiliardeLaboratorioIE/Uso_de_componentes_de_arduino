const int PIN_BOTON = 4;
const unsigned long TIEMPO_REBOTE = 50;  // ms

/*

Antes de ejecutar el codigo asegurarse siempre de tener la conexion correcta como se indica 
en: https://github.com/AuxiliardeLaboratorioIE/Uso_de_componentes_de_arduino/blob/main/Conexiones/Conexiones.md
O preguntado al encargado de la materia / practica.

*/

int estadoAnterior = HIGH;       // última lectura estable
int ultimaLectura  = HIGH;       // última lectura cruda
unsigned long ultimoCambio = 0;  // momento del último cambio

void setup() {
  Serial.begin(9600);
  pinMode(PIN_BOTON, INPUT_PULLUP);  // reposo = HIGH, presionado = LOW
  Serial.println("Listo. Presiona el boton (pin 4).");
}

void loop() {
  int lectura = digitalRead(PIN_BOTON);

  // Si la lectura cambió, reinicia el temporizador de rebote
  if (lectura != ultimaLectura) {
    ultimoCambio = millis();
    ultimaLectura = lectura;
  }

  // Si la lectura se mantuvo estable el tiempo suficiente
  if ((millis() - ultimoCambio) > TIEMPO_REBOTE) {
    if (lectura != estadoAnterior) {
      estadoAnterior = lectura;

      if (lectura == LOW) {
        Serial.println("Boton presionado");
      } else {
        Serial.println("Boton liberado");
      }
    }
  }
}
