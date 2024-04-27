/*Escribe un programa que defina un vector de numeros y muestre en la salida estandar
el vector en orden inverso del ultimo al primero elemento*/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <conio.h>
// #include <math.h>
#include <algorithm>
using namespace std;

int main()
{
  int numbers[6];
  cout << "Introduce los elementos de un array: " << endl;
  for (int i = 0; i < 5; i++)
  {
    cin >> numbers[i];
  }
  cout << "Elementos de un array son: " << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << numbers[i] << " ";
  }
  cout << "\nElementos de un array en reversa son: " << endl;
  for (int i = 5; i > 0; i--)
  {
    cout << numbers[i] << " ";
  }
  return 0;
}
