# Códigos de ejemplo para Arduino UNO

Colección de sketches básicos para usar distintos sensores y módulos con una placa **Arduino UNO**. Cada ejemplo incluye el código y notas de uso. 

# Antes de poner en practica cada ejemplo, revisar la carpeta de [Conexiones](../Conexiones/Conexiones.md) para evitar problemas con el cableado. 


Para mas informacion revisar el documento [referencias](../Referencias.md) con las fuentes consultadas.

---


## Índice de componentes, códigos y diagramas

| Componente | Código de ejemplo | Diagrama de conexión | Descripción |
| :--- | :--- | :--- | :--- |
| Display de 7 segmentos | [`Display_ejemplo.ino`](../Códigos_de_ejemplo/Display_ejemplo.ino) | [`Conexion_Display.png`](../Conexiones/Conexion_Display.png) | Muestra un conteo secuencial del 0 al 9 en un display de 1 dígito. |
| Fotorresistencia (LDR) | [`Fotorresistencia_LDR_ejemplo.ino`](../Códigos_de_ejemplo/Fotorresistencia_LDR_ejemplo.ino) |  <br> [`Conexion_fotorresistencia.png`](../Conexiones/Conexion_fotorresistencia.png) | Mide el nivel de luminosidad ambiental mediante una entrada analógica. |
| LED RGB | [`RGB_ejemplo.ino`](../Códigos_de_ejemplo/RGB_ejemplo.ino) | [`Conexion_RGB.png`](../Conexiones/Conexion_RGB.png) | Controla el encendido y la combinación de colores (rojo, verde y azul). |
| Sensor de nivel de agua (3 pines) | [`Sensor_de_nivel_agua_ejemplo.ino`](../Códigos_de_ejemplo/Sensor_de_nivel_agua_ejemplo.ino) | [`Conexion_nivel_agua.png`](../Conexiones/Conexion_nivel_agua.png) | Lee el nivel de agua en contacto con el sensor mediante señal analógica. |
| Sensor de sonido (KY-037) | [`Sensor_de_sonido_ejemplo.ino`](../Códigos_de_ejemplo/Sensor_de_sonido_ejemplo.ino) | [`Conexion_Sonido.png`](../Conexiones/Conexion_Sonido.png) | Detecta picos de sonido (salida digital) y mide su intensidad (salida analógica). |
| Sensor de temperatura y humedad (DHT11) | [`Sensor_de_temperatura_ejemplo.ino`](../Códigos_de_ejemplo/Sensor_de_temperatura_ejemplo.ino) | [`Conexion_DHT_11.png`](../Conexiones/Conexion_DHT_11.png) | Obtiene lecturas de temperatura ambiente y las envía al monitor serie. |
| Sensor infrarrojo (HW-201) | [`Sensor_infrarrojo_ejemplo.ino`](../Códigos_de_ejemplo/Sensor_infrarrojo_ejemplo.ino) | [`Conexion_infrarrojo.png`](../Conexiones/Conexion_infrarrojo.png) | Detecta la presencia de obstáculos cercanos mediante una señal digital. |
| Sensor ultrasónico (HC-SR04) | [`Sensor_ultrasonico_ejemplo.ino`](../Códigos_de_ejemplo/Sensor_ultrasonico_ejemplo.ino) | [`Conexion_Ultrasonico.png`](../Conexiones/Conexion_Ultrasonico.png) | Calcula la distancia a un objeto en centímetros usando pulsos ultrasónicos. |
| Pulsador/Boton | [`Boton_ejemplo.ino`](C%C3%B3digos_de_ejemplo/Boton_ejemplo.ino) | [`Conexion_Boton.png`](../Conexiones/Conexion_Boton.png) |Detecta si un boton es pulsado|
| [Referencias](../Referencias.md) | [Referencias](https://www.youtube.com/watch?v=oYc0Anh0yq4) | [Referencias](https://www.youtube.com/watch?v=scSX0DFUzKc) | [Referencias](https://www.youtube.com/watch?v=A9hCzjBc7Q4) |


---

## Requisitos generales

- Arduino UNO y cable USB.
- [Arduino IDE](https://www.arduino.cc/en/software) con la placa **Arduino Uno** seleccionada.
- Monitor Serie a **9600 baudios** (salvo que se indique otra cosa).
- Para el DHT11: librerías **DHT sensor library** y **Adafruit Unified Sensor** (ambas de Adafruit), instalables desde el Gestor de Librerías. [Como instalar](https://www.youtube.com/watch?v=cx56rqchtgI)

---

# [⬅️ Volver al inicio](../README.md)


