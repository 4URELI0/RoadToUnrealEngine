/*Realize un programa que lea de la entrada estandar numeros hasta que se introdusca un 0. En ese momento el programa
debe terminar y mostrar en la salida estandar el numero de valores mayores que cero leidos*/
#include <iostream>
// #include <stdlib.h>
#include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int numero;//guardara los datos que usuario ingreso
  int contador = 0;//contara cuantos numero introdujo el usuario que sean diferente de 0
  cout << "Ingrese un numero: " << endl;
  cin >> numero;
  while (numero > 0)
  {
    contador++;
    cout << "Ingrese otro numero: " << endl;
    cin >> numero;
  }
  cout << "Los valores ingresado mayores a 0 son: " << contador << endl;
  return 0;
}