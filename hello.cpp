/*Escribe un programa que lea de las entradas estandar tres numeros. Despues debe leer un cuerto numero 
e indicar si el numero coincide con algunos de los introducido con anterioridad*/

 #include<iostream>
 using namespace std;

 int main(){
   int numero1,numero2,numero3,numero4;
   cout<<"Ingrese 3 valores: ";cin>>numero1>>numero2>>numero3;
   cout<<"Ingrese el 4to valor: ";cin>>numero4;
   if ((numero1 == numero4) || (numero2 == numero4) || (numero3 == numero4))
   {
    cout<<"Un numero concide con el 4to numero ingresado"<<endl;
   }else
   {
    cout<<"El cuarto numero no coincide con ninguno de los anteriores ingresado";
   }
   
   return 0;
 }