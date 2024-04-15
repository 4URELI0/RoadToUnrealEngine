/*
Realice un programa que lea un valor entero  determine si se trata de un numero impar o impar
*/
#include <iostream>
//#include<math.h>
using namespace std;

int main(){
  int numeroIngresado, resultado = 0;
  cout<<"Ingrese un numero : ";cin>>numeroIngresado;
  resultado = numeroIngresado % 2;
  if (resultado == 0)
  {
    cout<<"El numero es par";
  }
  else
  {
    cout<<"El numero es impar";
  }
   
  return 0;
}