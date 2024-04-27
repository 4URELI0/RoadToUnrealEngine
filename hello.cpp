/*Escriba un programa que defina un vector de numeros y calcule la suma de sus
elementos*/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int numero[5] = {1, 2, 3, 4, 5};
  int suma = 0; // Almacenar la suma de todos los vectores
  for (int i = 0; i < 5; i++)//en el bucle for la condicion sera menor a 5 por que si hay un vector de 5 elementos solo llegara hasta 4
  {
    suma += numero[i];
  }
  cout << "La suma de los elementos son: " << suma << endl;
  getch();
  return 0;
}