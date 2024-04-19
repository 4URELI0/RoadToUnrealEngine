/*Hacer un menu que considere las siguientes opciones:
caso1: cubo de un numero
caso2: numero par o impar
caso2: salir de la opciones
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int opcion, numero;
  float cuboNumero;
  cout << "Bienvenido al menu de juegos numericos" << endl;
  cout << "1.Cubo de un numero" << endl;
  cout << "2.Numero par o impar" << endl;
  cout << "3.Salir" << endl;
  cout << "Elija un numero el numero que desee en las opciones: ";
  cin >> opcion;

  switch (opcion)
  {
  case 1:
    cout << "Ingrese un valor para saber su resultado al cubo: ";
    cin >> numero;
    cuboNumero = pow(numero, 3);
    cout << "El valor del su numero al cubo es: " << cuboNumero;
    break;
  case 2:
    cout << "Ingrese un valor para determinar si es par o impar: ";
    cin >> numero;
    if (numero % 2 == 0)
    {
      cout << "El numero " << numero << " es par";
    }
    else
    {
      cout << "El numero " << numero << " es impar";
    }
    break;
  case 3:
    break;
  }
  return 0;
}