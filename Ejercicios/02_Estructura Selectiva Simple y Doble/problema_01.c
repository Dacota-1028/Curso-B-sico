#include <stdio.h>

int main(){
    // Variables
    int num1, num2, mayor;

    // Ingresar Datos
    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    // Solución
    if (num1 > num2){
        mayor = num1;
    } else{
        mayor = num2;
    }

    // Mostrar Datos
    printf("\n");
    printf("Numero mayor: %d", mayor);
    return 0;
}