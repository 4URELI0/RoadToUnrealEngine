/*Escribre la siguiente expresiones como expresiones en c++*/
#include <iostream>
using namespace std;

int main(){
  float a,b,c,d;
  float resultado = 0;
  cout<<"Escribe el valor de A: ";cin>>a;
  cout<<"Escribe el valor de B: ";cin>>b;
  cout<<"Escribe el valor de C: ";cin>>c;
  cout<<"Escribe el valor de D: ";cin>>d;

  resultado = (a+b) / (c+d);
  cout.precision(3);
  cout<<"El resultado es: " <<resultado;

  return 0;
}