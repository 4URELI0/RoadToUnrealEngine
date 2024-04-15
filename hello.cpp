/*
Escriba un programa que lea la entrada de un caracter e indique 
en la salida estandar si el caracter es una vocal minuscula o mayuscula
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
  return 0;
}