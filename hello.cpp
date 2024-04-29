/*Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicado por 2 y muestre el
segundo arreglo*/
#include <iostream>
#include <stdlib.h>
// #include <time.h>
#include <conio.h>
// #include <math.h>
// #include <algorithm>
using namespace std;

int main()
{
  int numeroRandom = 0;//Guardara el valor del numero aleatorio
  int numero[5];
  int numeroMultiplicado2[5];
  for (int i = 0; i < 5; i++)
  {
    numeroRandom = 1 + rand() % 50;//Generar el valor aleatorio
    numero[i] = numeroRandom;//En cada posicion del arreglo guardaremos el valor del numero aleatorio que salio por ejemplo en la posicion 0 puede estar un 34
    cout << numero[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 5; i++)
  {
    numeroMultiplicado2[i] = numero[i] * 2;//Multiplicamos *2 al valor aleatorio que contiene el arreglo y lo guardamos en otro arreglo
  }
  for (int i = 0; i < 5; i++)
  {
    cout << numero[i] << "x2"<< " = " << numeroMultiplicado2[i] << endl;
  }
  return 0;
}