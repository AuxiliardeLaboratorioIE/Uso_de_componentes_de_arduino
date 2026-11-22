# Uso de componentes de Arduino UNO

Repositorio con sketches de ejemplo y diagramas de conexión para usar sensores y módulos comunes con una placa **Arduino UNO**. Cada ejemplo es corto, está comentado y busca servir como punto de partida para proyectos propios.

> **Sobre el código:** los sketches son versiones propias y simples, escritas a partir de la documentación y los tutoriales listados en [`Referencias.md`](Referencias.md).

## Contenido

| Componente | Sketch | Diagrama de conexión |
|------------|--------|----------------------|
| Sensor de nivel de agua (3 pines) | [`Sensor_de_nivel_agua_ejemplo.ino`](C%C3%B3digos_de_ejemplo/Sensor_de_nivel_agua_ejemplo.ino) | [`Conexion_nivel_agua.png`](Conexiones/Conexion_nivel_agua.png) |
| Sensor infrarrojo HW-201 | [`Sensor_infrarrojo_ejemplo.ino`](C%C3%B3digos_de_ejemplo/Sensor_infrarrojo_ejemplo.ino) | [`Conexion_infrarrojo.png`](Conexiones/Conexion_infrarrojo.png) |
| Sensor ultrasónico HC-SR04 | [`Sensor_ultrasonico_ejemplo.ino`](C%C3%B3digos_de_ejemplo/Sensor_ultrasonico_ejemplo.ino) | [`Conexion_Ultrasonico.png`](Conexiones/Conexion_Ultrasonico.png) |
| Display de 7 segmentos | [`Display_ejemplo.ino`](C%C3%B3digos_de_ejemplo/Display_ejemplo.ino) | Ver [`Códigos_de_ejemplo.md`](C%C3%B3digos_de_ejemplo/C%C3%B3digos_de_ejemplo.md) |
| Sensor de sonido KY-037 | [`Sensor_de_sonido_ejemplo.ino`](C%C3%B3digos_de_ejemplo/Sensor_de_sonido_ejemplo.ino) | [`Conexion_Sonido.png`](Conexiones/Conexion_Sonido.png) |
| Fotorresistencia (LDR) | [`Fotorresistencia_LDR_ejemplo.ino`](C%C3%B3digos_de_ejemplo/Fotorresistencia_LDR_ejemplo.ino) | [`Conexion_LDR.png`](Conexiones/Conexion_LDR.png), [`Conexion_fotorresistencia.png`](Conexiones/Conexion_fotorresistencia.png) |
| Sensor de temperatura y humedad DHT11 | [`Sensor_de_temperatura_ejemplo.ino`](C%C3%B3digos_de_ejemplo/Sensor_de_temperatura_ejemplo.ino) | [`Conexion_DHT_11.png`](Conexiones/Conexion_DHT_11.png) |
| LED RGB KY-016 | [`RGB_ejemplo.ino`](C%C3%B3digos_de_ejemplo/RGB_ejemplo.ino) | Ver [`Códigos_de_ejemplo.md`](C%C3%B3digos_de_ejemplo/C%C3%B3digos_de_ejemplo.md) |

## Estructura del repositorio

```text
.
├── Conexiones/
│   ├── Conexion_DHT_11.png
│   ├── Conexion_LDR.png
│   ├── Conexion_Sonido.png
│   ├── Conexion_Ultrasonico.png
│   ├── Conexion_fotorresistencia.png
│   ├── Conexion_infrarrojo.png
│   ├── Conexion_nivel_agua.png
│   └── Conexiones.md
├── Códigos_de_ejemplo/
│   ├── Códigos_de_ejemplo.md
│   ├── Display_ejemplo.ino
│   ├── Fotorresistencia_LDR_ejemplo.ino
│   ├── RGB_ejemplo.ino
│   ├── Sensor_de_nivel_agua_ejemplo.ino
│   ├── Sensor_de_sonido_ejemplo.ino
│   ├── Sensor_de_temperatura_ejemplo.ino
│   ├── Sensor_infrarrojo_ejemplo.ino
│   └── Sensor_ultrasonico_ejemplo.ino
├── README.md
└── Referencias.md
```

- **[`Conexiones/`](Conexiones/Conexiones.md):** diagramas de conexión de los componentes y un documento que los describe.
- **[`Códigos_de_ejemplo/`](C%C3%B3digos_de_ejemplo/C%C3%B3digos_de_ejemplo.md):** un sketch por componente, más un documento con cada código explicado (conexión, código y notas de uso).
- **[`Referencias.md`](Referencias.md):** fuentes consultadas, agrupadas por componente.

## Requisitos

- Placa **Arduino UNO** y cable USB.
- [Arduino IDE](https://www.arduino.cc/en/software) con la placa *Arduino Uno* seleccionada.
- Monitor Serie a **9600 baudios**.
- Para el DHT11, las librerías **DHT sensor library** y **Adafruit Unified Sensor** (ambas de Adafruit), instalables desde el Gestor de Librerías del IDE.
- Protoboard, cables y las resistencias indicadas en cada ejemplo (por ejemplo, 220 Ω para los segmentos del display y 10 kΩ para el divisor de la LDR).

## Cómo usar los ejemplos

1. Revisa el diagrama o la tabla de conexión del componente.
2. Abre el sketch `.ino` correspondiente en el Arduino IDE.
3. Selecciona la placa y el puerto, y sube el programa.
4. Abre el Monitor Serie a 9600 baudios para ver las lecturas (el display y el LED RGB se observan directamente en el circuito).

> **Importante:** el Arduino IDE exige que cada sketch esté en una carpeta con el mismo nombre que su archivo `.ino`, y junta en un solo programa todos los `.ino` que haya en la misma carpeta. Si abres un ejemplo desde `Códigos_de_ejemplo/`, el IDE ofrecerá moverlo a su propia carpeta. Acepta, o copia cada archivo a una carpeta aparte, para evitar errores de definiciones repetidas.

## Resumen de pines

Cada sketch es independiente y usa sus propios pines. Si quieres combinar varios en un solo programa, ten en cuenta que hay **conflictos**: los pines 2 y 3 y la entrada A0 se repiten entre ejemplos y habría que reasignarlos.

| Ejemplo | Pines usados |
|---------|--------------|
| Nivel de agua | 7, A0 |
| HW-201 | 2 |
| HC-SR04 | 2 (ECHO), 3 (TRIG) |
| Display de 7 segmentos | 2 a 8 |
| KY-037 | 3 (DO), A0 (AO), 13 (LED) |
| LDR | A0, 13 (LED) |
| DHT11 | 2 |
| LED RGB KY-016 | 9, 10, 11 |

## Referencias

Las fuentes de la información usada en los ejemplos están en [`Referencias.md`](Referencias.md). Cada una tiene su propia licencia o condiciones de uso; consúltalas si vas a reutilizar su código directamente.
