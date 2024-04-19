/*Escribe un porgrama que solicite la edad (un entero) e indique en la salida estandar
 si la edad introducida esta en el rango de [18-25]*/

 #include<iostream>
 using namespace std;
 int main(){
   int edad;
   cout<<"Escribe cuantos anios tienes: ";cin>>edad;
   
   /*Si edad es 18,19,20,21,22,23,24,25*/
   if ((edad >= 18) && (edad <= 25))
   {
    cout<<"Su edad esta en el rango de edad de [18 - 25]";
   }else
   {
    cout<<"Su edad no esta en dicho rango";
   }
     
   return 0;
 }