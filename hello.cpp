/*
Escribe un programa que lea tres numeros y determine cual de ellos es mayor
*/
#include <iostream>
//#include<math.h>
using namespace std;

int main(){
  int numero1, numero2, numero3;
  cout<<"Escribe dos numeros:"; cin>>numero1>>numero2>>numero3;

  if (numero1 && numero2 < numero3)
  {
    cout<<"El numero mayor es: "<<numero3;
  }else if (numero1 && numero3 < numero2)
  {
    cout<<"El numero mayor es: "<<numero2;
  }else
  {
    cout<<"El numero mayor es: "<<numero1;
  }
  
  
  
  return 0;
}