// Ejercicio 1.1: Calculadora del Costo Total en una Tienda de Abastos
#include <iostream>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    float numeritop;
    float numeritoc;
    char continuar;
    float costo = 0.0;
    vector<float> precios;
    vector<float> cantidades;
    do
    {
        cout << "Introduce el precio de tu articulo: ";
        std::cin >> numeritop; // Leer el número introducido por el usuario
        precios.push_back(numeritop);
        cout << "introduce la cantidad de tu articulo: ";
        cin >> numeritoc;
        cantidades.push_back(numeritoc);
        cout << "¿Quieres introducir otro articulo? (s/n): ";
        std::cin >> continuar; // Leer la decisión del usuario
    } while (continuar == 's' || continuar == 'S');

    for (int i = 0; i < precios.size() && i < cantidades.size(); i++)
    {
        costo += precios[i] * cantidades[i];
    }
    cout << "el costo total de su compra es: " << costo;
    return 0;
}