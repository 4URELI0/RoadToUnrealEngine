/*Realiza un programa que defina una matriz de 3*3 y escriba un ciclo para que muestre a diagonal principal de la matriz*/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <conio.h>
// #include <math.h>
// #include <algorithm>
using namespace std;

int main()
{
  int numeros[100][100], filas = 3, columnas = 3;
  /*Almacenando elementos en la matriz*/
  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      cout << "Digite un numero: [" << i << "][" << j << "]: ";
      cin >> numeros[i][j];
    }
  }
  /*Mostrando la matriz*/
  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      cout << numeros[i][j];
    }
    cout << "\n";
  }
  /*Mostrar la diagonal de la matriz principal*/
  
  getch();
  return 0;
}