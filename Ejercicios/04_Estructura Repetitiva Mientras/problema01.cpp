#include <iostream>
using namespace std;

int main(){
    // Variables
    int i = 0, suma = 0, numero = 0;
    
    // Ingresar Datos
    cout << "Ingresar Numero: ";
    cin >> numero;

    // Solución del problema
    while (i <= numero){
        suma += i;
        i++;
    }

    // Mostrar Datos
    cout << "Suma: " << suma;
}