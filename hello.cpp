/*Escribe un programa que defina un vector de numero en el vector y calcule si exite algun numeroen el vector cuyo
valor equivale a la suma del resto de numeros del vector*/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <conio.h>
// #include <math.h>
// #include <algorithm>
using namespace std;

int main()
{
  int numberInt[100], n, sumaArreglo = 0, i; // n es para guardar el numero de elementos del arreglo
  cout << "Digite el numero de elemento en el arreglo: ";
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cout << i + 1 << ". Digite un numero: ";
    cin >> numberInt[i];
    sumaArreglo += numberInt[i];
  }
  /*Recorremos otra vez el arreglo pero ya con los valores ingresado del usuario*/
  for (int i = 0; i < n; i++)
  {
    cout << numberInt[i] << " ";
    /*Preguntamos en cada posicion del arreglo si es igual a la suma de los elementos del arreglo*/
    if (numberInt[i] == sumaArreglo)
    {
      cout << "\n La suma de los elementos es: " << sumaArreglo << " y es ese valor esta en la posicion: " << i << " del arreglo";
    }
  }
  getch();
  return 0;
}