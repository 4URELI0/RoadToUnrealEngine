/*Realize un programa que calcule la suma de dos matrices de 3*3*/
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
  int numeros1[3][3], numero2[3][3], sumaMatriz[3][3];
  cout << "Matriz 1 \n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "[" << i << "][" << j << "]: ";
      cin >> numeros1[i][j];
    }
  }
  cout << "Matriz 2 \n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "[" << i << "][" << j << "]: ";
      cin >> numero2[i][j];
    }
  }
  /*Suma de matriz*/
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sumaMatriz[i][j] = numeros1[i][j] + numero2[i][j];
    }
  }
  cout << "Resultado de la suma de matrices\n";
  /*Mostrar a la matriz sumada*/
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "|" << sumaMatriz[i][j] << "|";
    }
    cout << "\n";
  }
  return 0;
}
