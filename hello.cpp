/*
La calificacion final de un estudidante es la media ponderada de 3 notas
La nota de practica que es un 30%
la nota de teorica que cuenta 60%
la nota de participacion que es un 10%
Escribe un programa que lea la entrada estandar. Las 3 notas del alumno y 
escribe en la solida entrada su nota final.
*/
#include <iostream>
using namespace std;

int main(){
  /*Declaramos las variables*/
  float notaPractica, notaTeorica, notaParticipacion;
  float notaFinal = 0;
  /*Hacemos que el usuario escriba los datos*/
  cout<<"Escribe la nota de practica: "; cin>>notaPractica;
  cout<<"Escribe la nota de teorica: "; cin>>notaTeorica;
  cout<<"Escribe la nota de participacion: "; cin>>notaParticipacion;
  /*Realizamos las operaciones o calculos*/
  notaPractica *=  0.30;
  notaTeorica *= 0.60;
  notaParticipacion *=  0.10;
 
  notaFinal = notaPractica + notaTeorica + notaParticipacion;
  /*Nota final del alumno*/
  cout<<"\n La nota final es: "<<notaFinal;
 
  return 0;
}