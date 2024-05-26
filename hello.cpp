/*Comparar cadenas - Funcion strcmp()*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

//avion - becerro

int main(int argc, char const *argv[])
{
  char palabra1[] = "becerro";
  char palabra2[] = "avion";

  if (strcmp(palabra1, palabra2) > 0)
  {
    cout << palabra1 << " Esta alfabeticamente";
  }
  return 0;
}
