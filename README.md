# Topicos Selectos en Computacion

Este repositorio contiene las actividades realizadas durante la materia de Topicos Selectos en Computacion

## Practicas
- [Practica 1: Entradas y salidas digitales](#practica-1-entradas-y-salidas-digitales)
- [Practica 2: Lectura de la tensión analógica](#practica-2-lectura-de-la-tensión-analógica)
- [Practica 3: Probador de baterías con salida a LCD](#practica-3-probandor-de-baterías-con-salida-a-lcd)
- [Practica 4: Sensores de temperatura con salida a LCD](#practica-4-sensores-de-temperatura-con-salida-a-lcd)
- [Practica 5: Sensor de temperatura DS18B20 con LCD](#practica-5-sensor-de-temperatura-ds18b20-con-lcd)
- [Practica 6: Decodificación de teclado con salida a LCD](#practica-6-decodificación-de-teclado-con-salida-a-lcd)
- [Practica 7: Arduino Master Slave](#practica-7-arduino-master-slave)
- [Practica 8: Operadores aritméticos en Arduino](#practica-8-operadores-aritméticos-en-arduino)
- [Practica 9: Alarma con sensores de movimiento PIR y buzzer](#practica-9-alarma-con-sensores-de-movimiento-pir-y-buzzer)
- [Practica 10:](#practica-10)
- [Practica 11: Módulo de sensor de detección de latido cardíaco](#practica-11-módulo-de-sensor-de-detección-de-latido-cardíaco)
- [Practica 12: Sensor ultrasónico HC-SR04 y LCD](#practica-12-sensor-ultrasónico-hc-sr04-y-lcd)
- [Practica 13: Real Time Clock (RTC) con LCD](#practica-13-real-time-clock-rtc-con-lcd)
- [Practica 14: Control On/Off temporizador por RTC y teclado con carga de CA](#practica-14-control-onoff-temporizador-por-rtc-y-teclado-con-carga-de-ca)
- [Practica 15: Servomotor](#practica-15-servomotor)
- [Practica 16: Fotorresistencia (LDR)](#practica-16-fotorresistencia-ldr)

## Practica 1: Entradas y salidas digitales

En esta preactica inicial se utiliza un push button en el pin 7, en arreglo de pull-up, de atl manera que cuando lo presiones nos proporcione un 0 y cuando lo sueltes nos proporcione un 1, o si lo ponemos en pull-down el funcionamiento seria, cuando lo presiones dara un 1 y cuando lo sueltes 0.

El valor que nos mande el push button se verá reflejado en el led que tenemos conectado en el pin 13.

### Materiales
- Arduino.
- Led.
- Push Button.
- Resistencia.

### Diagrama de conexiones
![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_1/Practica_1.png)

## Practica 2: Lectura de la tensión analógica

En esta practica se leera una entrada analogica en el pin A0, la convierte a tensión e imprime el valor del voltaje en el Monitor Serie.

### Materiales
- Arduino.
- Potenciómetro.

### Diagrama de conexiones
![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_2/Practica_2.png)

## Practica 3: Probandor de baterías con salida a LCD

En esta practica se crea un programa para revisar el nivel de tensión de una pila AA o AAA. Se pretende conectar una pila entre la entrada analógica 0 y tierra, leer el valor de tensión y mostrar en la pantalla LCD el estado de la pila:
  - Perfecto (>1.40V).
  - Bueno ([1.20V, 1.40V]).
  - Regular ([1.20V, 0.30V]).
  - Malo ([<0.30V]).

### Materiales
- Arduino.
- LCD.
- Potenciómetro.
- Baterias (AAA o AA).

### Librerias
- LiquidCrystal

### Diagrama de conexiones

![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_3/Practica_3.png)

## Practica 4: Sensores de temperatura con salida a LCD

En esta practica se creara un programa que revise cual es la temperatura actual y que la lectura sea mostrada cada 3 segundos en el LCD en grados centígrados.

Usaremos A4 (entrada analogica 4) para leer valores de la variable ttemperatura.

### Materiales
- Arduino.
- LCD.
- Potenciómetro.
- LM35.

### Librerias
- LiquidCrystal

### Diagrama de conexiones

![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_4/Practica_4.png)

## Practica 5: Sensor de temperatura DS18B20 con LCD

En esta practica utilizaremos el sensor de temperatura DS18B20 que es un dispositivo que se comunica de forma digital. Cuenta con tres terminales: Vcc, GND y el pin Data. Este sensor utiliza comunicación por protocolo serial digital **OneWire**. Esté protocolo de comunicacion permite enviar y recibir datos utilizados un solo cable. A diferencia de otros, que utilizan dos omas lineas de comunicación digital.

### Materiales
- Arduino.
- LCD.
- Potenciómetro.
- Sensor DS18B20.
- Resistencia 4.7 K.

### Librerias
- LiquidCrystal.
- OneWire.
- DallasTemperature.

### Diagrama de conexiones

![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_5/Practica_5.png)

## Practica 6: Decodificación de teclado con salida a LCD.

En esta preactica se creara un programa para leer la tecla presionada del teclado y que la lectura nos la muestre en el LCD, para lo cual necesitamos un keypad 4x4.

Ocupamos que los datos se actualicen cada segundo, para que asi lo mantenga en el LCD y lo podamos leer.

### Materiales
- Arduino.
- LCD.
- Potenciómetro.
- Keypad 4x4.

### Librerias
- LiquidCrystal
- Keypad

### Diagrama de conexiones

![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_6/Practica_6.png)

## Practica 7: Arduino Master Slave

En esta practica utilizaremos el circuito Inter-Inotegrado o I2C, este es un protocolo que normalmente se utiliza para la comunicación entre componentes de placas base en cámaras y en cualquier sustema electrónico embebido. En la practica realizaremos un bus I2C usando dos arduinos.

Programaremos un arduino maestro para que ordene al otro Arduino esclavo que parpadee si LED incorporado una o dos veces dependiendo del valor recibido.

### Materiales
- 2 Arduinos.
- 2 Resistencias de 1K.
- 1 Resistencia de 330 ohms.
- 1 LED.

### Librerias 
- Wire

### Diagrama de conexiones

![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_7_Master_Slave/Practica_7.png)

## Practica 8: Operadores aritméticos en Arduino

Se desarrolla un codigo para una calculadora artimetica, es decir, solo va ahacer las operaciones básicas de suma , resta, division y multiplicación, estas funciones las tiene arduino incluidas como primitivas , no se requiere de una libreria especial para trabajar con ellas.

### Materiales
- Arduino.
- LCD.
- Potenciómetro.
- Keypad 4x4.

### Librerias 
- LiquidCrystal
- Keypad

### Diagrama de conexiones

![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_6/Practica_6.png)

## Practica 9: Alarma con sensores de movimiento PIR y buzzer

En esta practica se implementara una larma que se active si dettecta movimiento y que genere una serie de tonos de la lista de nostas musicales en el buzzer.

La función a utilizar para generación de tonos es:
- tone(pin, frecuencia)
- noTone(pin)

### Materiales
- Arduino.
- Led.
- Resistencia de 330 ohms.
- Sensor de movimiento PIR.
- Buzzer 13MM 9 KHZ

### Diagrama de conexiones

![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_9_Alarma_con_sensor_de_movimiento_PIR_y_buzzer/Practica_9.png)

## Practica 10:

## Practica 11: Módulo de sensor de detección de latido cardíaco

En esta practica se diseara un programa mediante el cial se pueda monitorear el ritmo cardiaco de una persona, mediante el sensor de pulso de ritmo cardiaco  yque nos indique las pulsaciones del corazon por minuto y que visualicemos dicho valor en el monitor serial del IDE de arduino.+

### Materiales
- Arduino.
- Sensor de pulso ritmo cardíaco para dedo.

### Conexiones

| **Sensor de pulso ritmo cardíaco para dedo** | **Arduimo** |
|:--------------------------------------------:|:-----------:|
| +                                            | 5V          |
| -                                            | GND         |
| S                                            | A0          |

## Practica 12: Sensor ultrasónico HC-SR04 y LCD

En esta practica se creara un programa capaz de medir que tan lejos se encunetra un objeto, mostrar la distancia en el LCD.

### Materiales
- Arduino.
- LCD.
- Potenciometro.
- Sensor ultrasonido HC-SR04.

### Librerias:
- LiquidCrystal

### Diagrama de conexiones

![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_12_Sensor_ultrasonico/Practica_12.png)

## Practica 13: Real Time Clock (RTC) con LCD

En esta practica se hara uso de un circuito integrado de bajo consumo que mantiene la hora actual.

### Materiales
- Arduino.
- LCD.
- Potenciometro.
- RTC.

### Librerias
- RTClib
- LiquidCrystal

### Conexiones

| **RTC** | **Arduino** |
|:-------:|:-----------:|
| 5V      | 5V          |
| GND     | GND         |
| SCL     | A5          |
| SDA     | A4          |

## Practica 14: Control On/Off temporizador por RTC y teclado con carga de CA

Se diseñar un programa para el arduino, en el cual el LCD nos pida introducir la
hora de encendido (ON) de la carga de CA (foco) la cual introduciremos por medio del
teclado.

Después en el LCD se nos pedirá introducir la hora de apagado (OFF) de la carga de CA
(foco) la cual introduciremos mediante el teclado.

Después de introducir la hora de encendido y apagado, el LCD debe de estar mostrando
la hora actual del RTC, para así poder apreciar cuando encienda la carga de CA (foco) y
que sea la hora que se introdujo y también observar que se cumple con la hora de
apagado.

### Materiales
- Arduino.
- LCD.
- Potenciometro.
- RTC.
- Keypad 4x4.
- Malla de potencia.

### Librerias
- LiquidCrstal
- Keypad
- RTClib

### Diagrama de conexiones

![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_14/Practica_14.png)

## Practica 15: Servomotor

En esta practica se desarrollara un codigo que nos permita controlar un servomotor con arduino.

### Materiales
- Arduino.
- Servomotor.

### Librerias
- Servo

### Diagrama de conexiones


![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_15_Servomotor/Practica_15.png)

## Practica 16: Fotorresistencia (LDR)

En esta practica lo que vamos a hacer es conectar este divisor de tensión en un pin analógico del arduino (A0), y vamos
a desarrollar un sistema que detecte si hay luz o si esta oscuro, es decir vamos a tapar la LDR o a dejarla
expuesta a la luz, cuando la tapemos simularemos que no hay luz y se activará una carga de corriente alterna
(foco) y cuando destapemos la LDR es porque si hay luz y el foco debe de apagar,

### Materiales
- Arduino.
- Malla de potencia.
- LDR
- Resistencia 10K

### Diagrama de conexiones

![](https://github.com/Ricardo-Macias/Topicos_Selectos_en_Computacion/blob/main/Practica_16_LDR/Practica_16.png)
