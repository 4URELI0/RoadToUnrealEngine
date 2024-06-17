#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // definicion de un vector dinamico
    /*Formas de definir el vector dinamico*/
    // 1- vector<tipo-dato> nombre Vector - sin tamanio
    // 2- vector<tipo-dato> nombre- Vector(tamanio) - vector indicando su tamanio, se puede agregar mas si es que lo necesito
    // 3- vector<tipo-dato> nombre-Vector(tamanio, valorInicial)- le indicamos su tamanio y por defecto que todas las celdas tengan por defecto x valor
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "[" << v[i] << "]";
    }

    cout << endl << "Agregados" << endl;
    int nuevoValor;
    cin >> nuevoValor;
    v.push_back(nuevoValor);
    cout << endl;

    for (int i = 0; i < v.size(); i++)//el size nos mostrara el tamanio real del vector
    {
        cout << "[" << v[i] << "]";
    }
}