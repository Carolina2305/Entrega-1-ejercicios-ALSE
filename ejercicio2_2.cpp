#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int num; // Variable para almacenar el numero ingresado por el usuario
    cout << "Ingrese un numero: ";
    cin >> num;

    if ((num % 2 == 0) && (num > 0)) // Si el numero es par y positivo se imprime el mensaje
    {
        cout << "El numero es par y positivo" << endl;
    }
    else // Si no se cumple la condicion se imprime el que no cumple con las especificaciones
    {
        cout << "El numero no cumple con las especificaciones" << endl;
    }
}