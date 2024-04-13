/*
Escriba un progama que calcule las solucione de una ecuacion de segundo grado de la forma
ax(2) + bx + c = 0
*/
#include <iostream>
#include<math.h>
using namespace std;

int main(){
  float a,b,c,resultadoX1 = 0, resultadoX2 = 0;
  cout<<"Ingrese el valor de A: ";cin>>a;
  cout<<"Ingrese el valor de B: ";cin>>b;
  cout<<"Ingrese el valor de C: ";cin>>c;

  resultadoX1 = (-b + sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
  resultadoX2 = (-b - sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
  
  cout<<"\n El resultado de X1 es: "<<resultadoX1;
  cout<<"\n El resultado de X2 es: "<<resultadoX2;
  return 0;
}