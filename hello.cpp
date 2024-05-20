#include <iostream>
// #include <stdlib.h>
// #include <time.h>
#include <ctime>
#include <conio.h>
// #include <math.h>
// #include <algorithm>
#include <iomanip>
using namespace std;

void mostrarSaldo(double saldo);
double deposito();
double retirar(double saldo);

int main(int argc, char const *argv[])
{
  double saldo = 0;
  short int opciones = 0;
  string nombre;
  string apellido;

  cout << "Nombre: " << nombre;
  cin >> nombre;
  cout << "Apellido: " << apellido;
  cin >> apellido;
  do
  {
    cout << "*------------------------------*\n";
    cout << "BIENVENIDO AL BANCO DE MESSI\n";
    cout << "Hola " << nombre << apellido << " \n";
    cout << "Elija una opcion por favor \n";
    cout << "*------------------------------*\n";
    cout << "1. Mostrar saldo\n";
    cout << "2. Depositar dinero\n";
    cout << "3. Retirar dinero\n";
    cout << "4. Salir del banco\n";
    cin >> opciones;

    switch (opciones)
    {
    case 1:
      mostrarSaldo(saldo);
      break;
    case 2:
      saldo += deposito();
      mostrarSaldo(saldo);
      break;
    case 3:
      saldo -= retirar(saldo);
      break;
    case 4:
      cout << "Gracias por confiar en nosotros\n";
      break;
    default:
      cout << "Por favor elija una opcion dentro del rango 1-4\n";
      break;
    }
  } while (opciones != 4);
  return 0;
}
void mostrarSaldo(double saldo)
{
  cout << "Su saldo es: $" << setprecision(2) << fixed << saldo << "\n";
}
double deposito()
{
  double monto = 0;

  cout << "Cual es el monto que quiere depositar en su cuenta?\n $";
  cin >> monto;
  if (monto > 0)
  {
    return monto;
  }
  else
  {
    return 0;
  }
}
double retirar(double saldo)
{
  double monto = 0;
  cout << "Por favor ingrese cuanto dinero desea retirar: \n$";
  cin >> monto;
  if (monto > saldo)
  {
    cout << "Fondo insuficiente\n";
    return 0;
  }
  else if (monto < 0)
  {
    cout << "Por favor ingresa una cantidad valida\n";
    return 0;
  }
  else
  {
    return monto;
  }
}