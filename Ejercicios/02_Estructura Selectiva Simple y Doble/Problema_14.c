#include <stdio.h> 
#include <math.h>

int main(){
    // Variables
    double val_a, val_b, val_c;
    double ecuacion;
    double repeEcuacion;

    // Ingredar Datos
    printf("Primer valor: ");
    scanf("%le", &val_a);

    printf("Segundo Valor: ");
    scanf("%le", &val_b);

    printf("Tercer valor: ");
    scanf("%le", &val_c);

    // Solución
    ecuacion = pow(val_b, 2.0) - 4.0 * val_a * val_c;
    /**
     * a b c
     * 2 3 4
    */
    repeEcuacion = pow(val_b, (1.0/2.0)) - 4 * val_a * val_c;

    if (val_a != 0 && ecuacion != 0){
        //raiz1 = - val_b;
    }

    printf("%f\n", repeEcuacion);
    return 0;
}