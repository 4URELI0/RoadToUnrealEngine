/**/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <ctime>
#include <conio.h>
#include <math.h>
// #include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
  int numero1;
  int numero2;
  cout << "Escriba un valor que sera multiplicado por el siguiente valor que usted ingrese: " << endl;
  cin >> numero1;
  cout << "Escriba otro valor: " << endl;
  cin >> numero2;
  int multiplicacion = numero1 * numero2;
  int elevado = pow(multiplicacion,3);
  cout << "El resultado de la multiplicacion con una elevacion al cubo es: " << elevado << endl;
  return 0;
}