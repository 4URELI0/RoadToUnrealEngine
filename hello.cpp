/*
Escriba un programa que lea de la entrada estandar un caracter 
e indique en la salida estandar
 si el caracter es una vocal minuscula o no es una vocal
*/
#include <iostream>
//#include<math.h>
using namespace std;

int main(){
  char letra;
  cout<<"Escribe un caracter: ";cin>>letra;
  
  switch (letra)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  cout<<"Es una vocal minuscula";
  break;
  default:
  cout<<"No es una vocal minuscula";
  break;
  }
  switch (letra)
  {
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
  cout<<"Es una vocal mayuscula";
  break;
  default:
  cout<<"No es una vocal mayuscula";
  }
  return 0;
}