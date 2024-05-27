/*Pasar una palabra a Mayuscula - Funcion stupr()*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
  char nombre1[] = "cristian";
  strupr(nombre1);
  cout << nombre1 << endl;
  return 0;
}
