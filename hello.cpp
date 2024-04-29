/*Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicado por 2 y muestre el
segundo arreglo*/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <conio.h>
// #include <math.h>
// #include <algorithm>
using namespace std;

int main()
{
  int numero[5] = {2, 3, 5, 7, 9};
  int numeroMultiplicado2[5];
  for (int i = 0; i < 5; i++)
  {
    numeroMultiplicado2[i] = numero[i] * 2;
  }
  for (int i = 0; i < 5; i++)
  {
    cout << numero[i] << "x2"<< " --> " << numeroMultiplicado2[i] << endl;
  }
  return 0;
}