/*
Realice un programa que lea un valor entero  determine si se trata de un numero impar o impar
*/
#include <iostream>
//#include<math.h>
using namespace std;

int main(){
  int numeroIngresado;

  cout<<"Ingrese un numero negativo o positivo: ";cin>>numeroIngresado;

  if (numeroIngresado == 0)
  {
    cout<<"El numero es cero";
  }else if (numeroIngresado < 0)
  {
    cout<<"El numero "<<numeroIngresado<<" es negativo";
  }else if(numeroIngresado > 0)
  {
    cout<<"El numero "<<numeroIngresado<<" es positivo";
  }
  return 0;
}