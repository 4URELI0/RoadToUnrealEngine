/*Escribe un programa que lea la entradas un vector de numeros y muestre en la salida
estandar los numeros del vector con sus indices asociados*/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int numeros[100], n;
  cout << "Escribe el numeros de elementos que va a tener el arreglo: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cout << "Digite un numero: ";
    cin >> numeros[i]; // Numeros guardado en el vector
  }
  // Ahora vamos a mostrar los elementos con sus indices asociados
  for (int i = 0; i < n; i++)
  {
    cout << i << "--> " << numeros[i] << endl;
  }
  getch();
  return 0;
}