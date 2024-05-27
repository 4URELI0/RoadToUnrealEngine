/*Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para
preguntarle
al usuario su nombre, por ultimo agregar el nombre final de la primera cadena y
mostrar el mensaje completo
"Hola que tal (Nombre del usuario)"*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
  /*Variables que usaremos*/
  char pregunta[] = "Como te llamas?"; // Preguntar al usuario su nombre
  char nombreUsuario[30];// Guardamos el nombre en esta cadena
  char saludo[] = "Hola que tal ";// Saludo al usuario

  cout << pregunta << endl;
  cin.getline(nombreUsuario, 30);//Nos servira para almacenar el nombre del usuario en la variable nombreUsario que tiene un limite de 30 espacio
  cout << strcat(saludo, nombreUsuario) << endl;//Mostramos el mensaje del saludo + el nombre 

  getch();
  return 0;
}
