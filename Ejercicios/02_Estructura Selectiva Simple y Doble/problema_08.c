#include <stdio.h>

int main(){
    // Variables
    int num1,
        num2,
        num3,
        n_mayor,
        n_intermedio,
        n_menor;

    // Ingresar Datos
    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2 : ");
    scanf("%d", &num2);

    printf("Numero 3: ");
    scanf("%d", &num3);

    // Solución

    // Numero mayor
    if (num1 > num2 && num1 > num3){
        n_mayor = num1;
    }else if(num2 > num1 && num2 > num3){
        n_mayor = num2;
    }else{
        n_mayor = num3;
    }

    // Numero menor

    if (num1 < num2 && num1 < num3){
        n_menor = num1;
    }else if(num2 < num1 && num2 < num3){
        n_menor = num2;
    }else{
        n_menor = num3;
    }

    // Numero intermedio
    n_intermedio = num1 + num2 + num3 - (n_mayor + n_menor);

    // Mostrar Datos
    printf("\n");
    printf("Mayor: %d\n", n_mayor);
    printf("Intermedio: %d\n", n_intermedio);
    printf("Menor: %d", n_menor);

    return 0;
}