/*Escribir un programa que calcule el factorial de: 1*2*3*4*...*n(factorial)*/
#include <iostream>
// #include <stdlib.h>
#include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int numero, factorial = 1;
  cout << "Escribe un numero: ";
  cin >> numero;
  for (int i = 1; i <= numero; i++)
  {
    factorial = factorial * i;
  }
  cout << "El factorial del numero es: " << factorial;
  return 0;
}