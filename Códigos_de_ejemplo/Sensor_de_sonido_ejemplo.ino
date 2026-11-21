const int AO_PIN = A0;  // salida analógica
const int DO_PIN = 3;   // salida digital (umbral con el potenciómetro)
const int LED_PIN = 13;

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
