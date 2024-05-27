/*Pasar una palabra a minuscula - Funcion strlwr()*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
  char palabra[] = "CRISTIAN";
  strlwr(palabra);//Transforma la palabra a minuscula
  cout << palabra << endl;
  return 0;
}
