const int TRIG_PIN = 3;
const int ECHO_PIN = 2;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}


/*

Antes de ejecutar el codigo asegurarse siempre de tener la conexion correcta como se indica 
en: https://github.com/AuxiliardeLaboratorioIE/Uso_de_componentes_de_arduino/blob/main/Conexiones/Conexiones.md
O preguntado al encargado de la materia / practica.

*/


void loop() {
  // Pulso de disparo de 10 microsegundos
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duracion = pulseIn(ECHO_PIN, HIGH, 30000); // timeout 30 ms
  float distanciaCm = duracion * 0.0343 / 2.0;

  if (duracion == 0) {
    Serial.println("Fuera de rango");
  } else {
    Serial.print("Distancia: ");
    Serial.print(distanciaCm);
    Serial.println(" cm");
  }
  delay(200);
}
