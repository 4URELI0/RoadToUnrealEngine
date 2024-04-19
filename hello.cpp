/*Hacer un programa que simule un cajero automatico con un saldo inicial de 1k USD*/

#include <iostream>
using namespace std;

int main()
{
  int saldoInicial = 1000, opcion;
  float extra, saldoActual = 0, retiro;
  /*Va a dejar espacio en la linea el "\t"*/
  cout << "\tBienvenido a su cajero virtual" << endl;
  cout << "1. Ingresar dinero en cuenta" << endl;
  cout << "2. Retirar dinero de la cuenta" << endl;
  cout << "3. Salir del cajero" << endl;
  cout << "Opciones: ";
  /*La opcion que ponga el usuario de valor lo va a iniciar*/
  cin >> opcion;

  switch (opcion)
  {
  case 1:
    cout << "Ingrese la cantidad de dinero que quiere ingresar: ";
    cin >> extra;
    saldoActual = extra + saldoInicial;
    cout << "Dinero en su cuenta: " << saldoActual;
    break;
  case 2:
    cout << "Escribe cuanto dinero quiere retirar: ";
    cin >> retiro;
    if (retiro > saldoInicial)
    {
      cout << "Su cuenta no tiene fondo suficientes para retirar el dinero deseado";
    }
    else
    {
      saldoActual = saldoInicial - retiro;
      cout << "Cantidad de dinero retirado: " << retiro << "$" << endl;
      cout << "Dinero actual de la cuenta: " << saldoActual << "$" << endl;
    }
    break;
  case 3:
    cout << "Gracias por confiar en nosotros, hasta luego.";
    break;
  }
  return 0;
}