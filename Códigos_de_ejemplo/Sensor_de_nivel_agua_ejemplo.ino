const int SIGNAL_PIN = A0;

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
