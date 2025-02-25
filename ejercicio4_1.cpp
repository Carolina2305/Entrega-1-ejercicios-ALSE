#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int arreglo[5];
    int numero;
    int suma = 0;

    for (int i = 0; i < 5; i++) // Va llenando el arreglo con los numeros que el usuario ingrese
    {
        cout << "Ingrese un numero que se quiere agregar al arreglo: ";
        cin >> arreglo[i];
    }

    cout << "Su arreglo es: " << arreglo[0] << ", " << arreglo[1] << ", " << arreglo[2] << ", " << arreglo[3] << ", " << arreglo[4] << endl;

    for (int i = 0; i < 5; i++) // Va sumando los numeros del arreglo
    {
        suma += arreglo[i];
    }

    cout << "La suma de los numeros del arreglo es: " << suma << endl;

    if (suma > 0)
    { // Compara si la suma es positiva, negativa o 0
        cout << "La suma de los numeros del arreglo es positiva" << endl;
    }
    else if (suma < 0)
    {
        cout << "La suma de los numeros del arreglo es negativa" << endl;
    }
    else
    {
        cout << "La suma de los numeros del arreglo es 0" << endl;
    }

    if (suma % 2 == 0)
    { // Compara si la suma es par o impar
        cout << "La suma de los numeros del arreglo es par" << endl;
    }
    else
    {
        cout << "La suma de los numeros del arreglo es impar" << endl;
    }

    return 0;
}