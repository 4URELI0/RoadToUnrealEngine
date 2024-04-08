/*Escribre un programa que lea de la entrada de la terminal dos numero y muestre en la salida 
de terminal su suma, resta, multiplicacion y division*/

#include<iostream>
using namespace std;

int main(){
  int numero1;
  int numero2;
  int suma = 0;
  int resta = 0;
  int multiplicacion = 0;
  int division = 0;

  cout<<"Escribre un numero: ";
  cin>> numero1;
  cout<<"Escribre otro numero: ";
  cin>>numero2;

  suma = numero1 + numero2;
  resta = numero1 - numero2;
  multiplicacion = numero1 * numero2;
  division = numero1 / numero2;

  cout<<"\nLa suma es: " << suma<<endl;
  cout<<"\nLa resta es: " << resta<<endl;
  cout<<"\nLa multiplicacion es: " << multiplicacion<<endl;
  cout<<"\nLa division es: " << division<<endl;
  return 0;
}