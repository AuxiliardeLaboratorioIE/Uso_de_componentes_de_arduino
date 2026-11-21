# Códigos de ejemplo para Arduino UNO

Colección de sketches básicos para usar distintos sensores y módulos con una placa **Arduino UNO**. Cada ejemplo incluye el código y notas de uso. 

# Antes de poner en practica cada ejemplo, revisar la carpeta de [Conexiones](../Conexiones/Conexiones.md) para evitar problemas con el cableado. 


Para mas informacion revisar el documento [referencias](../Referencias.md) con las fuentes consultadas.

---

## Índice de archivos

| Archivo | Componente | Descripción |
| :--- | :--- | :--- |
| [`Display_ejemplo.ino`](./Display_ejemplo.ino) | Display de 7 segmentos | Muestra un conteo secuencial del 0 al 9 en un display de 1 dígito. |
| [`Fotorresistencia_LDR_ejemplo.ino`](./Fotorresistencia_LDR_ejemplo.ino) | Fotorresistencia (LDR) | Mide el nivel de luminosidad ambiental mediante una entrada analógica. |
| [`RGB_ejemplo.ino`](./RGB_ejemplo.ino) | LED RGB | Controla el encendido y la combinación de colores (rojo, verde y azul). |
| [`Sensor_de_nivel_agua_ejemplo.ino`](./Sensor_de_nivel_agua_ejemplo.ino) | Sensor de nivel de agua (3 pines) | Lee el nivel de agua en contacto con el sensor mediante señal analógica. |
| [`Sensor_de_sonido_ejemplo.ino`](./Sensor_de_sonido_ejemplo.ino) | Sensor de sonido (KY-037) | Detecta picos de sonido (salida digital) y mide su intensidad (salida analógica). |
| [`Sensor_de_temperatura_ejemplo.ino`](./Sensor_de_temperatura_ejemplo.ino) | Sensor de temperatura | Obtiene lecturas de temperatura ambiente y las envía al monitor serie. |
| [`Sensor_infrarrojo_ejemplo.ino`](./Sensor_infrarrojo_ejemplo.ino) | Sensor infrarrojo (HW-201) | Detecta la presencia de obstáculos cercanos mediante una señal digital. |
| [`Sensor_ultrasonico_ejemplo.ino`](./Sensor_ultrasonico_ejemplo.ino) | Sensor ultrasónico (HC-SR04) | Calcula la distancia a un objeto en centímetros usando pulsos ultrasónicos. |
| [Referencias](#referencias) |[Referencias](https://www.youtube.com/watch?v=oYc0Anh0yq4)|[Referencias](https://www.youtube.com/watch?v=A9hCzjBc7Q4)|


---

## Requisitos generales

- Arduino UNO y cable USB.
- [Arduino IDE](https://www.arduino.cc/en/software) con la placa **Arduino Uno** seleccionada.
- Monitor Serie a **9600 baudios** (salvo que se indique otra cosa).
- Para el DHT11: librerías **DHT sensor library** y **Adafruit Unified Sensor** (ambas de Adafruit), instalables desde el Gestor de Librerías. [Como instalar](https://www.youtube.com/watch?v=cx56rqchtgI)

---



