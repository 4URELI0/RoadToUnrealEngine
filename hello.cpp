/*Realize un programa que solicite al usuario que piense en un numero entero entre el 1-100. El programa
debe generar un numero aleatorio en ese mismo rango [1-100] e indicarle al usuario si el numero
que digite es menor o mayor al numero aleatorio, asi hasta que lo adivine, y por ultimo mostrarle el numero
de intento que llevo*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
// #include <conio.h>
// #include <math.h>
using namespace std;

int main()
{
  int numero, datoRandom, contador = 0;
  srand(time(NULL)); // Generar un numero aleatorio
  datoRandom = 1 + rand() % (100);
  do
  {
    cout << "Escribe un numero: ";
    cin >> numero;
    if (numero > datoRandom)
    {
      cout << "\nEscribe un numero menor\n";
    }
    if (numero < datoRandom)
    {
      cout << "\nEscribe un numero mayor\n";
    }
    contador++;
  } while (numero != datoRandom);
  cout << "\nFelicidades adivinaste el numero!";
  cout << "Numero de intentos: " << contador << endl;
  system("pause");
  return 0;
}