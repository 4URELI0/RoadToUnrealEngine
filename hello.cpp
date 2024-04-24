/*Hacer un programa que calcule el resultado de la siguiente expresion  1-2+3-4+5-6....n*/
#include <iostream>
#include <stdlib.h>
// #include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int suma = 0, n, signo = 1;
  cout << "Digite el valor de n: ";
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    signo *= -1;
    suma = suma + (i * signo);
  }
  cout << "El resultado es: " << suma;
  return 0;
}