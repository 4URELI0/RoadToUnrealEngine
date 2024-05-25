/*Realice un programa que calcule el producto de dos matrices cuadrada de 3 x 3 */
#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
  int matriz1[100][100], matriz2[100][100], productoMatriz[100][100], filas, columnas;

  cout << "Introduce la cantidad de filas de la matriz: ";
  cin >> filas;

  cout << "Introduce la cantidad de columnas de la matriz: ";
  cin >> columnas;

  /*Ingresar los valores de la matriz 1*/
  cout << "Matriz 1 \n";
  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      cout << "[" << i << "]" << "[" << j << "]: ";
      cin >> matriz1[i][j];
    }
  }

  /*Ingresar los valores de la matriz 2*/
  cout << "Matriz 2 \n";
  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      cout << "[" << i << "]" << "[" << j << "]: ";
      cin >> matriz2[i][j];
    }
  }

  if (filas == columnas)
  {
    cout << "Es una matriz cuadrada";
    /*Producto de matrices*/
    for (int i = 0; i < filas; i++)
    {
      for (int j = 0; j < columnas; j++)
      {
        productoMatriz[i][j] = 0;
        for (int k = 0; k < 3; k++)
        {
          productoMatriz[i][j] += matriz1[i][k] * matriz2[k][j];
        }
      }
      cout << "\n";
    }

    /*Resultado del producto matriz por la terminal*/
    for (int i = 0; i < filas; i++)
    {
      for (int j = 0; j < columnas; j++)
      {
        cout << "|" << productoMatriz[i][j] << "|";
      }
      cout << "\n";
    }
  }
  else
  {
    cout << "No es una matriz cuadrada";
  }
  return 0;
}
