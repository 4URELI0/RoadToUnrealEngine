/*Escribre la siguiente expresiones como expresiones en c++*/
#include <iostream>
using namespace std;

int main(){
  /*Declaramos las variables*/
  float a,b,c,d;
  float resultado = 0;//Almacenara el valor del resultado
  
  /*El usuario va a ingresar los valores*/
  cout<<"Escribe el valor A: "; cin>> a;
  cout<<"Escribe el valor B: "; cin>> b;
  cout<<"Escribe el valor C: "; cin>> c;
  cout<<"Escribe el valor D: "; cin>> d;
  /*Operacion que debe realizar el programa*/
  resultado = a + (b / (c-d));
  /*Nos ayduara a reducir la cantidad de numero al obtener el resultado osea lo va a redondear*/
  cout.precision(3);
  cout<<"\nEl resultado es: "<<resultado<<endl;
  
  return 0;
}