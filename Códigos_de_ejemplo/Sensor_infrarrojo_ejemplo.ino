const int IR_PIN = 2;

void setup() {
  Serial.begin(9600);
  pinMode(IR_PIN, INPUT);
}

void loop() {
  int estado = digitalRead(IR_PIN);

  if (estado == LOW) {
    Serial.println("Obstaculo detectado");
  } else {
    Serial.println("Sin obstaculo");
  }
  delay(100);
}
