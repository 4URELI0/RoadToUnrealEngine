// Libreria de c++
#include <iostream>
#include <cmath>
using namespace std;

void numeroFlotante()
{
  double a, b, c;
  cout << "Ingrese los coeficiente de la ecuacion cuadratica por favor" << endl;
  cin >> a >> b >> c;

  double X1 = (b + sqrt((b * b) + 4 * a * c)) / 2 * a;
  double X2 = (b - sqrt((b * b) + 4 * a * c)) / 2 * a;
  double discriminante = sqrt((b * b) + 4 * a * c);

  /*Concavidad*/
  if (a < 0)
  {
    cout << "La parabola es convexa o con ramas hacia abajo" << endl;
  }
  else
  {
    cout << "La parabola es concava o con ramas hacia arriba" << endl;
  }

  /*Verificacion de la discriminante*/
  if (discriminante > 0)
  {
    cout << "Dos soluciones" << endl;
  }
  else if (discriminante == 0)
  {
    cout << "Una única solución" << endl;
  }
  else
  {
    cout << "Sin soluciones reales" << endl;
    return;
  }
  /*Encontrar el vertice*/
  /*double ejeDeSimetriaX = -b / 2 * a;
  double X = ejeDeSimetriaX;
  double ejeDeSimetriaY = (a * (X * X)) + b * X + c; */

  cout << "La raiz cuadrara es " << X1 << " y " << X2 << endl;
  cout << "La discriminate es " << discriminante << endl;
  // cout<<"El eje de simetria es "<<"Xv: "<< ejeDeSimetriaX<<" y el de Yv: "<<ejeDeSimetriaY;
}
int main()
{
  numeroFlotante();
  return 0;
}