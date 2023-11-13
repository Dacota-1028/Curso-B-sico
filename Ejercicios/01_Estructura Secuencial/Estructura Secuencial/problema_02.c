#include <stdio.h>

int main(){
    // Variables
    int num1, num2, cociente, residuo;

    // Ingresar Datos
    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    // Solución
    cociente = num1 / num2;
    residuo = num1 % num2;

    // Mostrar Datos
    printf("\n");
    printf("Cociente: %d\n", cociente);
    printf("Residuo: %d", residuo);
    return 0;
}