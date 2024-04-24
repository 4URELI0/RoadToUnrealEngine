/*Escriba un programa que calcule el valor de: 2 elevada 1 + 2 elevado 2 + ... + 2 elevado n*/
#include <iostream>
#include <stdlib.h>
// #include <conio.h>
#include <math.h>
using namespace std;

int main()
{
  int suma = 0, elevacion = 0, n;
  cout << "Digite el numero de elemento a sumar: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    elevacion = pow(2, i);
    suma += elevacion;
  }
  cout << "\nLa suma total es: " << suma << endl;
  system("pause");
  return 0;
}