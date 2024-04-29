/*Realiza un programa que defina dos vectores de caracteres y despues almacene el contenido de ambos vectores
en un nuevo vector, situando en primer lugar los elemenos del primer vector seguido del segundo vector.
Muestre el contenido del nuevo vector en la salida estandar*/
#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <conio.h>
// #include <math.h>
// #include <algorithm>
using namespace std;

int main()
{
  char letras1[] = {'a', 'b', 'c', 'd', 'e'};
  char letras2[] = {'f', 'g', 'h', 'i', 'j'};
  char letras3[10];

  /*Copiando los elementos del arreglo letras1 a letras 3*/
  for (int i = 0; i < 5; i++)
  {
    letras3[i] = letras1[i];
  }
  /*Copiando los elementos del arreglo letras2 a letras3*/
  for (int i = 5; i < 10; i++)
  {
    letras3[i] = letras2[i - 5];//Le pondremos el i-5 para que elimine los elementos basura de 5 elementos en el arreglo
                                //para que me vaya copiando los elementos de letras2
  }
  /*Mostrar el nuevo vector*/
  for (int i = 0; i < 10; i++)
  {
    cout << letras3[i] << endl;
  }
  getch();
  return 0;
}