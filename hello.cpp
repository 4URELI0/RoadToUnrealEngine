/*Longitud de una cadena de caracteres - Funcion strLen()*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
  char palabra[] = "hola como estas?";
  int longitud = 0; // Guardamos el valor que nos va a dar strLen
  longitud = strlen(palabra);
  cout << "Numeros de elementos de la cadena es: " << longitud << endl;
  getch();
  return 0;
}
