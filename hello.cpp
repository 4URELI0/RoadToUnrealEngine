/*Pedir al usuario una cadena de la caracteres, almacenarla en un arreglo
y copiar todo su contenido hacia otro arreglo de caracteres*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
  char nombreUsuario[30];
  char copiaNombre[30];

  cout << "Por favor escribe tu nombre: ";
  cin.getline(nombreUsuario, 30);

  // Copiamos los valores de la cadena con elementos a la cadena vacia
  strcpy(copiaNombre, nombreUsuario);
  cout << "Se realizo una copia de tu nombre en otro arreglo: " << copiaNombre;
  return 0;
}
