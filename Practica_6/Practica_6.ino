#include <Keypad.h> //Importar libreria 

const byte Row = 4; //Numero de filas del teclado
const byte column = 4; //Numero de columnas del teclado

char keys[Row][column] = {
  {"1", "2", "3", "A"},
  {"4", "5", "6", "B"},
  {"7", "8", "9", "C"},
  {"*", "0", "#", "D"}
}; //Definir un mapa de la distribucion del teclado

byte pinesRow[Row] = {7, 6, 5, 4}; //pines donde esta conectado
byte pinesColumn[Column] = {3, 2, 1, 0}; //pines donde esta conectado

Keypad teclado = Keypad(makeKeymap(keys), pinesRow, pinesColumn, Row, Column);

char tecla;

void setup() {
  Serial.begin(9600);

}

void loop() {
  tecla = teclado.getKey();
  Serial.print(tecla);
  delay(1000);
}
