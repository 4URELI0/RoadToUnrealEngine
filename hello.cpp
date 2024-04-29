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
  int numbers[7];
  cout << "Introduce los elementos de un array: " << endl;
  for (int i = 0; i <= 6; i++)
  {
    cin >> numbers[i];
  }
  cout << "Elementos de un array son: " << endl;
  for (int i = 0; i <= 6; i++)
  {
    cout << numbers[i] << " ";
  }
  /*El arreglo va a mostrar los valores en reversa por que iniciamos un numero menor a 7 debido a que el
  arreglo inicia desde 0 hasta 6 y seria 7 valores*/
  cout << "\nElementos de un array en reversa son: " << endl;
  for (int i = 6; i >= 0; i--)
  {
    cout << numbers[i] << " ";
  }
  return 0;
}