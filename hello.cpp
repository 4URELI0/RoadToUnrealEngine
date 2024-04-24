/*En una clase 5 alumnos han realizado 3 examenes y se requiere determinar el numero de:
aprobado todos los examenes
aprobaron al menos un examen
aprobaron el ultimo examen
realize un programa que permita la lectura de datos y el calculo de estadistica*/
#include <iostream>
#include <stdlib.h>
// #include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int alumnos = 5, primerExamen = 0, segundoExamen = 0, tercerExamen = 0, i = 1, aprobarontodas = 0,
      aprobaronSoloUno = 0, aprobaronUltimoExamen = 0;
  while (i <= alumnos)
  {
    cout << "Alumno N: " << i << endl;
    cout << "Nota del 1er examen: ";
    cin >> primerExamen;
    cout << "Nota del 2do examen: ";
    cin >> segundoExamen;
    cout << "Nota del 3er examen: ";
    cin >> tercerExamen;
    if (primerExamen >= 7 && segundoExamen >= 7 && tercerExamen >= 7)
    {
      aprobarontodas++;
    }
    else if (primerExamen >= 7 || segundoExamen >= 7 || tercerExamen >= 7)
    {
      aprobaronSoloUno++;
    }
    else if (primerExamen != 7 && segundoExamen != 7 && tercerExamen >= 7)
    {
      aprobaronUltimoExamen++;
    }
    i++;
  }
  cout << "Alumnos que aprobaron todos los examenes: " << aprobarontodas << endl;
  cout << "Alumnos que aprobaron solo uno: " << aprobaronSoloUno << endl;
  cout << "Alumnos que aprobaron el ultimo examen: " << aprobaronUltimoExamen << endl;
  return 0;
}