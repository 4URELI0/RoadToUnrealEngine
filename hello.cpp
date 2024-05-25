/*Realice un programa que calcule el producto de dos matrices cuadrada de 3 x 3 */
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int matriz1[3][3], matriz2[3][3], productoMatriz[3][3];

  cout << "Matriz 1 \n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "[" << i << "]" << "[" << j << "]: ";
      cin >> matriz1[i][j];
    }
  }

  cout << "Matriz 2 \n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "[" << i << "]" << "[" << j << "]: ";
      cin >> matriz2[i][j];
    }
  }

  /*Producto de matrices*/
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      productoMatriz[i][j] = 0;
      for (int k = 0; k < 3; k++)
      {
        productoMatriz[i][j] += matriz1[i][k] * matriz2[k][j];
      }
    }
  }
  /*Resultado*/
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "|" << productoMatriz[i][j] << "|";
    }
    cout << "\n";
  }
  return 0;
}
