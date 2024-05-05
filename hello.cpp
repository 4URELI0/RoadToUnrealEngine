/*Hacer una matriz preguntando al usuario el numeros de filas y columnas, llenarlas de numeros
aleatorio, copiar el contenido a otra matriz y por ultimo mostrarla en la consola*/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <ctime>
#include <conio.h>
// #include <math.h>
// #include <algorithm>
using namespace std;

int main()
{
  /*Pedirle al usuario al usuario cuanta filas y columnas quiere*/
  int numeros[10][10], numeros2[10][10], filas, columnas;
  cout << "Digite el numeros de filas entre el 1 a 10: ";
  cin >> filas;
  cout << "Digite la cantidad de columnas entre el 1 a 10: ";
  cin >> columnas;

  /*Almacenando elementos en la matriz*/
  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      numeros[i][j] = (rand() % 9) + 1;
    }
  }
  /*Pasar la matriz numero a  numero2*/
  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      numeros2[i][j] = numeros[i][j];
    }
  }
  /*Mostrando la matriz2*/
  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      cout << "|" << numeros2[i][j] << "|";
    }
    cout << "\n";
  }
  return 0;
}