#include <stdio.h>

int main(){
    // Variables
    int num1, 
        num2,
        num3,
        num4,
        suma_total,
        porc1,
        porc2,
        porc3,
        porc4 = 0;

    // Constantes
    const int PORCENTAJE = 100;

    // Ingresar Datos
    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    printf("Numero 3: ");
    scanf("%d", &num3);

    printf("Numero 4: ");
    scanf("%d", &num4);

    // Solución
    suma_total = num1 + num2 + num3 + num4;

    porc1 = (num1 * PORCENTAJE) / suma_total;
    porc2 = (num2 * PORCENTAJE) / suma_total;
    porc3 = (num3 * PORCENTAJE) / suma_total;
    porc4 = (num4 * PORCENTAJE) / suma_total;

    // Mostrar datos
    printf("\n");
    printf("Porcetaje de %d es: %d%%\n", num1, porc1);
    printf("Porcetaje de %d es: %d%%\n", num2, porc2);
    printf("Porcetaje de %d es: %d%%\n", num3, porc3);
    printf("Porcetaje de %d es: %d%%\n", num4, porc4);



    return 0;
}