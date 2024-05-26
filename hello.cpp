/*Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la
longitud de la cadena, y si esta supera los 10 caracteres mostrarla en pantalla, caso contrario
no mostrarla*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
  char palabra[30];
  int longitud = 0; // Guardamos el valor que nos va a dar strLen

  cout << "Por favor escribe una cadena de caracteres: ";
  cin.getline(palabra, 30);
  longitud = strlen(palabra);

  if (longitud > 10)
  {
    cout << "La palabra es: " << palabra << endl;
    cout << "La longitud es: " << longitud;
  }
  else
  {
    cout << "Es menor que el valor de 10";
  }
  getch();
  return 0;
}
