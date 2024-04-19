/*Mostrar los meses del anio, pidiendole al usuario un numero entre (1-12), y mostrar el mes al que corresponde*/

 #include<iostream>
 using namespace std;

 int main(){
 int numero;
  cout<<"Ingrese un numero y le indicaremos el mes: "; cin>>numero;
  switch (numero)
  {
  case 1: cout<<"Enero"; break;
  case 2: cout<<"Febrero";break;
  case 3: cout<<"Marzo";break;
  case 4: cout<<"Abril";break;
  case 5: cout<<"Mayo";break;
  case 6: cout<<"Junio";break;
  case 7: cout<<"Julio";break;
  case 8: cout<<"Agosto";break;
  case 9: cout<<"Septiembre";break;
  case 10: cout<<"Octubre";break;
  case 11: cout<<"Noviembre";break;
  case 12: cout<<"Diciembre";break;
  default: cout<<"El numero ingresado salio del rango requerido para mostrar el mes";break;
  }
  return 0;
 }