const int PIN_R = 11;
const int PIN_G = 10;
const int PIN_B = 9;

// Valores de 0 (apagado) a 255 (maximo brillo)
void setColor(int r, int g, int b) {
  analogWrite(PIN_R, r);
  analogWrite(PIN_G, g);
  analogWrite(PIN_B, b);
}

void setup() {
  pinMode(PIN_R, OUTPUT);
  pinMode(PIN_G, OUTPUT);
  pinMode(PIN_B, OUTPUT);
}

void loop() {
  // Colores basicos, 1 segundo cada uno
  setColor(255, 0, 0);     // rojo
  delay(1000);
  setColor(0, 255, 0);     // verde
  delay(1000);
  setColor(0, 0, 255);     // azul
  delay(1000);

  // Mezclas
  setColor(255, 255, 0);   // amarillo
  delay(1000);
  setColor(0, 255, 255);   // cian
  delay(1000);
  setColor(255, 0, 255);   // magenta
  delay(1000);
  setColor(255, 255, 255); // blanco
  delay(1000);

  // Degradado suave de rojo a azul
  for (int i = 0; i <= 255; i++) {
    setColor(255 - i, 0, i);
    delay(10);
  }
  for (int i = 0; i <= 255; i++) {
    setColor(i, 0, 255 - i);
    delay(10);
  }
}
