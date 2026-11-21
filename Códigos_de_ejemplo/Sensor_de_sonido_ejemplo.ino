const int AO_PIN = A0;  // salida analógica
const int DO_PIN = 3;   // salida digital (umbral con el potenciómetro)
const int LED_PIN = 13;



/*

Antes de ejecutar el codigo asegurarse siempre de tener la conexion correcta como se indica 
en: https://github.com/AuxiliardeLaboratorioIE/Uso_de_componentes_de_arduino/blob/main/Conexiones/Conexiones.md
O preguntado al encargado de la materia / practica.

*/

void setup() {
  Serial.begin(9600);
  pinMode(DO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int analogico = analogRead(AO_PIN);
  int digital   = digitalRead(DO_PIN);

  digitalWrite(LED_PIN, digital);  // el LED sigue a la salida digital

  Serial.print("Analogico: ");
  Serial.print(analogico);
  Serial.print("  Digital: ");
  Serial.println(digital);
  delay(100);
}
