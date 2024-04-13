/*Escribe un fragmento de programa que intercambie los valores entre dos variables*/
#include <iostream>
using namespace std;

int main(){
  int x,y,aux;
  cout<<"Escribe el valor de X: "; cin>>x;
  cout<<"Escribe el valor de Y: "; cin>>y;

  aux = x;//Auxiliar guarde el valor de X osea auxiliar va a valer X
  x = y;//X va a guardar el valor de Y 
  y = aux;//Y va a guarda el valor X
  
  cout<<"\n El nuevo valor de X es: "<<x<<endl;
  cout<<"\n El nuevo valor de Y es: "<<y<<endl;


  return 0;
}