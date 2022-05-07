#include <iostream>
using namespace std;

int main(){
    // Variables 
    int numInicial = 0, numFinal = 0, contador = 0;

    // Ingresar Datos
    cout << "Numero Inicial: ";
    cin >> numInicial;

    cout << "Numero Final: ";
    cin >> numFinal;

    // Solución
    numInicial++;
    while (numInicial < numFinal){
        contador += 1;
        numInicial++;
    }

    // Mostrar Datos
    cout << "Cantidad: " << contador;
}