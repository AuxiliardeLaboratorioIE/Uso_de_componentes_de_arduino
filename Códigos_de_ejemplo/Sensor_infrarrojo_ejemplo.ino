const int IR_PIN = 2;

void setup() {
  Serial.begin(9600);
  pinMode(IR_PIN, INPUT);
}


/*

Antes de ejecutar el codigo asegurarse siempre de tener la conexion correcta como se indica 
en: https://github.com/AuxiliardeLaboratorioIE/Uso_de_componentes_de_arduino/blob/main/Conexiones/Conexiones.md
O preguntado al encargado de la materia / practica.

*/


void loop() {
  int estado = digitalRead(IR_PIN);

  if (estado == LOW) {
    Serial.println("Obstaculo detectado");
  } else {
    Serial.println("Sin obstaculo");
  }
  delay(100);
}
