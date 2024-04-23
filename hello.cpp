/*escriba un programa que calcule el valor de 1 + 2 + 3 + .... + n*/
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
    suma = suma + i;
  }
  cout << "La suma es: " << suma << endl;
  return 0;
}