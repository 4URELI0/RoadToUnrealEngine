/*Realize un programa que solicite de la entrada un entero de 1 al 10 y muestre en la salida estandar su tabla de
multiplicar*/
#include <iostream>
// #include <stdlib.h>
#include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int numero;//Iniciar la variables
  do
  {
    cout << "Por favor escribe un numero entre 1 al 10: ";//Le pregunta al usuario que escriba un numero
    cin >> numero;
  } while ((numero < 1) || (numero > 10));//Le va a seguir pidiendo al usuario que el numero debe ser entre 1 al 10,
                                          //Si es menor que 1 va a volver a preguntar, si es mayor que 10 tambien va a volver a serlo 
  for (int i = 1; i <= 20; i++)
  {
    cout << numero << " x " << i << " = " << numero * i << endl;
  }

  return 0;
}