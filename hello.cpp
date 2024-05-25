/*Desarrollar un programa que determine si una matriz es simetrica o no, Una matriz es simetrica si es
cuadrada y si es igual a su matriz transparente*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int numeros[100][100], filas, columnas;
  char bandera = 'F';
  cout << "Escribe el numero de filas: ";
  cin >> filas;
  cout << "Escribe el numero de columas: ";
  cin >> columnas;

  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      cout << "Escribe un numero: [" << i << "]" << "[" << j << "]";
      cin >> numeros[i][j];
    }
  }

  if (filas == columnas)
  {
    for (int i = 0; i < filas; i++)
    {
      for (int j = 0; j < columnas; j++)
      {
        if (numeros[i][j] == numeros[j][i])
        {
          bandera = 'V';
        }
      }
    }
  }
  if (bandera == 'V')
  {
    cout << "La matriz es simetrica";
  }
  else
  {
    cout << "La matriz no es simetrica";
  }
  return 0;
}
