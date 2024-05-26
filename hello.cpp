/*Copiar el contenido de una cadena a otra - Funcion stcpy()*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
  char nombre[] = "Cristian";
  char nombre2[20];

  // Copiamos los valores de la cadena con elementos a la cadena vacia
  strcpy(nombre2, nombre);

  cout << nombre2 << endl;

  return 0;
}
