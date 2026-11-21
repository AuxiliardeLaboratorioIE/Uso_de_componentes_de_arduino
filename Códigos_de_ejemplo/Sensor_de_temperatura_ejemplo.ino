#include "DHT.h"

#define DHTPIN  2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);  // el DHT11 es lento: no leer más rápido

  float humedad = dht.readHumidity();
  float tempC   = dht.readTemperature();   // Celsius por defecto

  if (isnan(humedad) || isnan(tempC)) {
    Serial.println("Error al leer el DHT11");
    return;
  }

  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.print(" %  Temperatura: ");
  Serial.print(tempC);
  Serial.println(" C");
}
