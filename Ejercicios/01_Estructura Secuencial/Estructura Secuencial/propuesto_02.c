#include <stdio.h>

int main(){
    // variables
    int num1, num2, cantidad_num;

    // Ingresar Datos
    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    // Solución
    cantidad_num = (num1 - num2) - 1;

    // Mostrar datos
    printf("\n");
    printf("Cantidad de numero: %d", cantidad_num);

    return 0;
}
