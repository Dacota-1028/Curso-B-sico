#include <stdio.h>

int main(){
    // Variables
    float sexagesimales, centesimales;

    // Ingresar Datos
    printf("Grados Sexagesimales: ");
    scanf("%f", &sexagesimales);

    // Solución
    centesimales = sexagesimales * (10.0 / 9.0);

    // Mostrar Datos
    printf("\n");
    printf("Centesimales: %.2f", centesimales);
    return 0;
}