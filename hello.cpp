/*
Realize un programa que calcule el valor que toma la siguiente funcion para uno de los valores
dados de x e y
*/
#include <iostream>
#include<math.h>
using namespace std;

int main(){
  float x,y,resultado = 0;
  cout<<"Escribe el valor de X: "; cin>>x;
  cout<<"Escribe el valor de Y: "; cin>>y;
  resultado = (sqrt(x)) / (pow(y,2) - 1);
  cout.precision(3);
  cout<<"\nEl resultado es: "<<resultado;
  return 0;
}