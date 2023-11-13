#include <stdio.h>

int main(){
    // Variables
    int num1, num2, resultado;

    // Ingresar Datos
    printf("Ingresar numero 1: ");
    scanf("%d", &num1);

    printf("Ingresar numero 2: ");
    scanf("%d", &num2);

    // Solución
    resultado = num1 + num2;

    // Mostrar Datos
    printf("\n");
    printf("Resultado: %d", resultado);
    return 0;
}