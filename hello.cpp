/*Hacer un programa que realize la serie fibonacci -> 1 1 2 3 5 8 13 ... n*/
#include <iostream>
#include <stdlib.h>
// #include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int n, x = 0, y = 1, z = 1;
  cout << "Digite el numero de elemento: ";
  cin >> n;
  cout << "1 ";
  for (int i = 1; i <= n; i++)
  {
    z = x + y;       // Al poner x + y, z va a valer 1; La suma que antes era 1, ahora viene con 2 por la suma de la linea 16 y 17 y imprimira 1 2
    cout << z << " "; // Imprime 1
    x = y;           // x que valia 0 ahora vale Y(1) y ahora x vale 1
    y = z;           // z es lo que vale z entonces y vale 1
  }
  cout << "\n ";
  system("pause");
  return 0;
}