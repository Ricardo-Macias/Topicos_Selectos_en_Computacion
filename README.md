# Topicos Selectos en Computacion

Este repositorio contiene las actividades realizadas durante la materia de Topicos Selectos en Computacion

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

## Practica 3: Probandor de baterás con salida a LCD

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

## Practica 4: Sensores de temperatura cpn salida a LCD

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


