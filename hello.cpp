/*La sentencia while(expresion logica){
  conjunto de intrucciones
}*/
#include <iostream>
#include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int i;
  i = 10; // Tenemos que inicializar el valor del iterador antes del bucle while
  while (i >= 1)
  {
    cout << i << endl;
    i--;
  }
  getch();
  return 0;
}