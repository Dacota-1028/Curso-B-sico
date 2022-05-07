#include <iostream>
using namespace std;

int main(){
    // Variables
    int numInicial, numFinal, i, pares;
    pares = 0;
    i = 0;

    // Ingresar Datos
    cout << "Numero Inicial: ";
    cin >> numInicial;

    cout << "Numero Final: ";
    cin >> numFinal;

    // Solución
    i = numInicial;
    while (i < numFinal){
        if (i % 2 == 0){
            pares += 1;
        }
        i++;
    }

    // Mostrar Datos
    cout << "Cantidad de Pares: " << pares;
}