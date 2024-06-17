#include <iostream>
using namespace std;

int main()
{
    // definicion de un vector estatico
    // tipo-dato nombre-vector[tamanio]
    int n;
    cin >> n;
    int ve[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ve[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ve[i] << " ";
    }
}