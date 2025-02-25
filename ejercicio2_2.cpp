#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int numero;
    std::cout << "numerito:";
    std::cin >> numero;                    // en esta parte se le solicita al usuario el numero
    if ((numero % 2 == 0) && (numero > 0)) // aqui se evalua si el residuo de la division del numero es 0(modulo) entonces es par
                                           // aqui evaluas si el numero es positivo
    {
        std::cout << "felicitaciones es par y positivo wuuuu"; // si se cumple se muestra el mensaje :D
    }
    else
    {
        std::cout << "parece que tu numero no cumple con las especificaciones";
    }
};
