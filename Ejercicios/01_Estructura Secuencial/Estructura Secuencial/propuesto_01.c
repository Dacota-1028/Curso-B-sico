#include <stdio.h>

int main(){
    // Variables
    int suma, resta, num1, num2;

    // Ingresar Datos
    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    // Solución
    suma = num1 + num2;
    resta = num1 - num2;

    // Mostrar Datos
    printf("\n");
    printf("Suma: %d\n", suma);
    printf("Resta: %d", resta);
    return 0;
}