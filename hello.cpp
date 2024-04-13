/*Realize un programa que lea de la entrada estandar los siguiente datos de una persona
edad: dato de tipo entero
genero: dato de tipo caracter
altura en metros: datos de tipo real
Tras mostrar los datos, el programa debe mostrarlos en la salida estandar*/
#include <iostream>
using namespace std;

int main(){
  string nombre;
  int edad;
  char genero[10];
  float altura;

  cout<<"Como te llamas?: "; 
  cin>>nombre;
  cout<<"Ingresa tu edad: "; 
  cin>>edad;
  cout<<"Ingresa tu genero: "; 
  cin>>genero;
  cout<<"Ingresa tu altura: "; 
  cin>>altura;

  cout<<"\nNombre y apellido: "<<nombre<<endl;
  cout<<"\nEdad: "<<edad<<endl;
  cout<<"\nGenero: "<<genero<<endl;
  cout<<"\nAltura: "<<altura<<"m"<<endl;
}