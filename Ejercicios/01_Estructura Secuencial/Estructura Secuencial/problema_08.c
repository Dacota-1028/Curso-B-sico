#include <stdio.h>
#include <math.h>

int main(){
    // Variables
    float   capital, 
            t_interes,
            monto, 
            tiempo,
            interes;

    // Ingresar datos
    printf("Capital: ");
    scanf("%f", &capital);

    printf("Tasas de Interes: ");
    scanf("%f", &t_interes);

    printf("Tiempo: ");
    scanf("%f", &tiempo);

    // Solución
    monto = pow((1.0 + t_interes / 100.0), tiempo) * capital;
    interes = monto - capital;

    // Mostrar datos
    printf("\n");
    printf("Interes: %.2f\n", interes);
    printf("Monto: %.2f", monto);
    return 0;
}
