/*Escribe un programa que calcule el valor de 1+3+5+...+2n-1*/
#include <iostream>
// #include <stdlib.h>
#include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int n, suma = 0;
  cout << "Escribe el numero de elementos: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    suma *=  2*n-1;
  }
  cout << "El resultado del valor es: " << suma << endl;
  return 0;
}