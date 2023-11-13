#include <stdio.h>

int main(){
    // Variables
    int num, result;

    // Ingresar Datos
    printf("Numero: ");
    scanf("%d", &num);

    // Solución
    if (num % 2 == 0){
        result = num * 2;
    }else{
        result = num * 3;
    }

    // Mostrar Datos
    printf("\n");
    printf("Resultado: %d", result);
    return 0;
}