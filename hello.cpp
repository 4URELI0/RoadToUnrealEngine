/*Realize un programa que lea una matriz de 3 * 3 y cree una matriz transpuesta. La matriz transpuesta es aquello en la
columna i era la fila i de la matriz original*/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <ctime>
#include <conio.h>
// #include <math.h>
// #include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
  int numeros[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "Escribe un numero [" << i << "][" << j << "]: ";
      cin >> numeros[i][j];
    }
  }

  cout << "\nMatriz original\n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << numeros[i][j] << " ";
    }
    cout << "\n";
  }
  /*Matriz en forma transpuesta*/
  cout << "\nMatriz transpuesta\n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << numeros[j][i] << " "; // Donde iba las filas ahora van las columnas y donde iban las columnas ahora van las filas
    }
    cout << "\n";
  }
  return 0;
}
