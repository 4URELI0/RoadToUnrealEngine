/*Cadena de caracteres*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
  char nombre[20];

  cout << "Escribe tu nombre: ";
  /*Son 3 parametros que va a recibir el cin.getLine*/
  //Se le va a indicar el nombre donde se va a guardar
  //Le indicamos cuantos espacio va a ocupar
  //Y se va a terminar cuando le indiquemos un salto de linea
  cin.getline(nombre, 20, '\n');

  cout << nombre << endl;

  getch();
  return 0;
}
