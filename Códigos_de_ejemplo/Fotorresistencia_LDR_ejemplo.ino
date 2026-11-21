const int LDR_PIN = A0;
const int LED_PIN = 13;        // LED opcional (con resistencia de 220 ohm)
const int UMBRAL  = 300;       // ajústalo según tu LDR y tu ambiente

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int luz = analogRead(LDR_PIN);   // 0 (oscuro) a 1023 (mucha luz)

  Serial.print("Nivel de luz: ");
  Serial.println(luz);

  // Enciende el LED cuando hay poca luz
  if (luz < UMBRAL) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
  delay(500);
}
