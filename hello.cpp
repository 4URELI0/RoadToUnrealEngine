/*Escribe un programa que defina un vector de numero y calcule la multiplicacion
acumulada de sus elementos*/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int numeros[6] = {4, 5, 6, 7, 8, 5};
  int multiplicacion = 1;//No la incializamos en 0 por que nos daria como resultado 0
  for (int i = 0; i < 6; i++)
  {
    multiplicacion *= numeros[i];
  }
  cout << "El resultado de la multiplicacion acumulada de los elementos es: " << multiplicacion << endl;
  getch();
  return 0;
}