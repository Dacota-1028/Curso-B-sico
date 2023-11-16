#include <stdio.h>
#include <string.h>

int main(){
    // Variables
    float a, b, x = 0.0f;

    // Ingresar Datos
    printf("Valor a: ");
    scanf("%f", &a);

    printf("Valor b: ");
    scanf("%f", &b);

    // Solución
    if (a != 0){
        x = -b / a;
        printf("EL valro de X es: %.2f\n", x);
    }else{
        printf("No es una ecuacion de 1grado.\n");
    }

    return 0;
}