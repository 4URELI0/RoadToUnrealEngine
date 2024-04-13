/*
Escriba un programa que lea de la entrada los dos cateto de un triangulo rectangulo y escriba
de la salida estandar su hipotenusa
*/
#include <iostream>
#include<math.h>
using namespace std;

int main(){
  float catetoA, catetoB, hipotenusa = 0;
  cout<<"Escriba el valor del cateto A: ";cin>>catetoA;
  cout<<"Escriba el valor del cateto B: ";cin>>catetoB;
  
  hipotenusa = sqrt(pow(catetoA,2) + pow(catetoB,2));
  cout<<"\n El valor de la hipotenusa es: "<<hipotenusa;

  return 0;
}