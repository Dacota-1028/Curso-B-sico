#include <stdio.h>

int main(){
    // Variables
    int num1, num2, num3, resul;

    // Ingresar Datos
    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    printf("Numero 3: ");
    scanf("%d", &num3);

    // Solución

    if (num1 > num2 && num1 > num3){
        resul = num1;
    }else if( num2 > num1 && num2 > num3){
        resul = num2;
    }else {
        resul = num3;
    }

    // Mostrar Datos
    printf("\n");
    printf("Numero mayor: %d", resul);
    return 0;
}