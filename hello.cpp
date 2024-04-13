/*
La sentencia if
if(condicion){
  Intruccion 1
}else{
  Intruccion 2
}
*/
#include <iostream>
//#include<math.h>
using namespace std;

int main(){
  int numero,dato = 5;
  cout<<"Ingresa un numero: ";cin>>numero;
  /*Verificacion*/
  if (numero < dato)
  {
    cout<<"El numero es menor a 5";
  }else
  {
    cout<<"El numero es mayor a 5";
  }
  
  return 0;
}