/*Realiza un programa que calcule el x1 y x2 de una ecuacion cuadratica y mostrar su valor por pantalla*/
#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
  float terminoCuadratico;    // a
  float terminoLineal;        // b
  float terminoIndependiente; // c

  /*Muestra el mensaje y le solicita al usuario los datos e ingresa los datos*/
  cout << "Por favor escribe el termino cuadratico: ";
  cin >> terminoCuadratico;
  cout << "Por favor escribe el termino lineal: ";
  cin >> terminoLineal;
  cout << "Escribe el termino independiente: ";
  cin >> terminoIndependiente;

  /*Formula de la ecuaciones*/
  float x1 = (-terminoLineal + sqrt(pow(terminoLineal, 2) - 4 * terminoCuadratico * terminoIndependiente)) / (2 * terminoCuadratico);
  float x2 = (-terminoLineal - sqrt(pow(terminoLineal, 2) - 4 * terminoCuadratico * terminoIndependiente)) / (2 * terminoCuadratico);
  
  /*Resultado por pantalla*/
  cout << "Resultado de X1: " << fixed << setprecision(2) << x1 << endl;
  cout << "Resultado de X2: " << fixed << setprecision(2) << x2 << endl;
  
  return 0;
}