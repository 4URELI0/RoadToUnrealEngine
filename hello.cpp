/*Convertir dos cadena de caracteres de minuscula a mayuscula. Compararlas y decir si son iguales o no*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
  char nombre1[] = "cristian";
  char nombre2[] = "cristian";
  strupr(nombre1);
  strupr(nombre2);
  if (strcmp(nombre1, nombre2) == 0)
  {
    cout << "Las palabras " << nombre1 << " y " << nombre2 << " son iguales";
  }
  else
  {
    cout << "Las palabras" << nombre1 << " y " << nombre2 << " no son iguales";
  }
  return 0;
}
