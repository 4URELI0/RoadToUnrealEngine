/*Ejemplo: realizar un programa en c++ que permita sumar n valores ingresados por
El usuario. Despues, mostrar los valores en el orden inverso en el que fueron ingresados.
n también es ingresado por el usuario.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, suma;
    cout << "Ingrese el tamanio del arreglo: " << endl;
    cin >> n;
    int vector1[n];
    
    cout << "Ingrese los valores: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> vector1[i];
    }

    /*Sumar los valores ingresado*/
    for (int i = 0; i < n; i++)
    {
        suma += vector1[i];
    }
    cout << "Resultado de la suma: " << suma << endl;
    
    /*Invertir los valores ingresados por el usuario*/
    cout << "Valores inversos: " << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << vector1[i] << endl;
    }

    return 0;
}