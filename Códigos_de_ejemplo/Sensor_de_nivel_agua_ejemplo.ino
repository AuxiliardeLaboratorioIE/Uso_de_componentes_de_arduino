const int SIGNAL_PIN = A0;


/*

Antes de ejecutar el codigo asegurarse siempre de tener la conexion correcta como se indica 
en: https://github.com/AuxiliardeLaboratorioIE/Uso_de_componentes_de_arduino/blob/main/Conexiones/Conexiones.md
O preguntado al encargado de la materia / practica.

*/


void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(10);                          // estabiliza
  int valor = analogRead(SIGNAL_PIN); // 0 a 1023

  Serial.print("Valor del sensor: ");
  Serial.println(valor);
  delay(500);
}
