#include <stdio.h>

int main(){
    // Variables
    int numero, suma_total;

    // Ingresar Datos
    printf("Numero: ");
    scanf("%d", &numero);

    // Solución
    suma_total = ( numero * ( numero + 1)) / 2;

    // Mostrar Datos
    printf("\n");
    printf("Suma de numeros: %d", suma_total);

    return 0;
}