/**/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <ctime>
#include <conio.h>
// #include <math.h>
//  #include <algorithm>
using namespace std;

void imprimirInfo(const string nombre, const string apellido, const int edad);

int main(int argc, char const *argv[])
{
  string nombre = "Aurelio", apellido = "Arraya";
  int edad = 19;
  imprimirInfo(nombre, apellido, edad);
  return 0;
}
void imprimirInfo(const string nombre, const string apellido, const int edad)
{
  cout << "Nombre: " << nombre << endl;
  cout << "Apellido: " << apellido << endl;
  cout << "Edad: " << edad << endl;
}