/* La sentencia Switch
 switch(expresion){
  case 1:
  intrucciones
  break;
  case2:
  intrucciones
  break;
  case 3:
  intrucciones
  break;
  default:
  intrucciones poir defecto
  break;
 }
*/
#include <iostream>
//#include<math.h>
using namespace std;

int main(){
  int numero;
  cout<<"Escribe un numero entre 1 y 5: ";cin>>numero;

  switch (numero)
  {
  case 1:cout<<"El numero es 1";break;
  case 2:cout<<"El numero es 2"; break;
  case 3: cout<<"El numeroe es 3";break;
  case 4: cout<<"El numero es 4";break;
  case 5:cout<<"El numero es 5";break;
  default:cout<<"El numero esta fuera de rango que se solicita";break;
  }
  
  return 0;
}