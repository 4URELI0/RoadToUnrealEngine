/*La sentencia do while()
do{
conjunto de expresiones
}while(expresion logica)
nota: el do while primero actua y luego piensa.
el while primero piensa y luego actua
}*/
#include <iostream>
#include<stdlib.h>
//#include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int i;
  i = 10;
  do
  {
    cout << i << endl;
    i--; // Decrementa el iterador en 1 en 1
  } while (i >= 1);
  system("pause");
  return 0;
}