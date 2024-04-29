/*Desarrolle un programa que lea la entrada estandar un vector de enteros y saber el mayor elemento de vector*/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <conio.h>
// #include <math.h>
// #include <algorithm>
using namespace std;

int main()
{
  int numberInt[100], n, biggerNumber = 0; // n es para guardar el numero de elementos del arreglo
  cout << "Digite el numero de elemento en el arreglo: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cout << i + 1 << ". Digite un numero: ";
    cin >> numberInt[i];
    // 1 2 4 10 5
    if (numberInt[i] > biggerNumber)
    {
      biggerNumber = numberInt[i]; // 1 es mayor que 0? si, entonces se le asigna el valor a biggerNumber,
                                   // 2 es mayor que 1? si, entonces se le asigna el valor a biggerNumber,
                                   // 4 mayor que 2? si, entonces se le asigna el valor a biggerNumber
                                   // 10 es mayor que 4? si, entonces se le asigna el valor a biggerNumber
                                   // biggerNumber = 10
                                   // 5 es mayor que 10? no, entonces el numero 10 queda dentro del elemento
    }
  }
  cout << "\n El mayor elemento del arreglo es: " << biggerNumber << endl;
  getch();
  return 0;
}