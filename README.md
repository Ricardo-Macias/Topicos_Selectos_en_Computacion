# Topicos Selectos en Computacion

Este repositorio contiene las actividades realizadas durante la materia de Topicos Selectos en Computacion

## Practicas

- [Practica 1: Entradas y salidas digitales](/Practica_1/)
- [Practica 2: Lectura de la tensión analógica](/Practica_2/)
- [Practica 3: Probador de baterías con salida a LCD](/Practica_3/)
- [Practica 4: Sensores de temperatura con salida a LCD](/Practica_4/)
- [Practica 5: Sensor de temperatura DS18B20 con LCD](/Practica_5/)
- [Practica 6: Decodificación de teclado con salida a LCD](/Practica_6/)
- [Practica 7: Arduino Master Slave](/Practica_7_Master_Slave/)
- [Practica 8: Operadores aritméticos en Arduino](/Practica_8_Operadores_aritmeticos/)
- [Practica 9: Alarma con sensores de movimiento PIR y buzzer](/Practica_9_Alarma_con_sensor_de_movimiento_PIR_y_buzzer/)
- [Practica 10: Arduino Master Slave con malla de potencia]()
- [Practica 11: Módulo de sensor de detección de latido cardíaco](/Practica_11_Modulo_de_sensor_de_deteccion_de_latidos_cardiacos/)
- [Practica 12: Sensor ultrasónico HC-SR04 y LCD](/Practica_12_Sensor_ultrasonico/)
- [Practica 13: Real Time Clock (RTC) con LCD](/Practica_13_Real_Time_Clock/)
- [Practica 14: Control On/Off temporizador por RTC y teclado con carga de CA](/Practica_14/)
- [Practica 15: Servomotor](/Practica_15_Servomotor/)
- [Practica 16: Fotorresistencia (LDR)](/Practica_16_LDR/)

## Tecnologias

- Arduino IDE
- C/C++
- Sensores

## Repositorio

Cada practica cuenta con un README propio donde se describen:

- Descripcion
- Materiales
- Librerias
- Diagrama de conexiones


## Practica 10: Arduino Master Slave con malla de potencia

En esta practica vamos a trabajar con un optotriac y un triac, usamos la practica 7, la dejamos montada y cableamos en el protoboard la
malla de potencia y conectamos con el pin 2 del arduino slave, de esta manera los pulsos digitales del Slave; accionaran la carga alimentada con 117 VCA.

### Materiales
- 2 Arduinos.
- 2 Resistencias de 1K.
- 1 Resistencia de 330 ohms.
- 1 LED.
- Malla de potencia.

### Librerias
- Wire

### Diagrama de conexiones

![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_7_Master_Slave/Practica_10.png)

