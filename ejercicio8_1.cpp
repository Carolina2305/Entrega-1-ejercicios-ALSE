#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int p; // se definen en estos primero numeros las varibles que se usan en la formula
    float r;
    int n;
    int t;
    cout << "ingrese la cantidad invertida "; // se le solicita al usuario esos valores
    cin >> p;
    cout << "ingrese la tasa de interes ";
    cin >> r;
    cout << "ingrese el numero de veces que se aplica la tasa por periodo ";
    cin >> n;
    cout << "ingrese el numero de periodos ";
    cin >> t;
    int result = p * pow((1 + r / n), n * t); // se realiza la formula para interes compuesto
    cout << "El resultado es: " << result << endl;
}