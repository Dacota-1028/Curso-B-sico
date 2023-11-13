#include <stdio.h>
#include <math.h>

int main(){
     // Variables
    int potencia, exponente, base;

    // Ingresar Datos
    printf("Ingresar la Base: ");
    scanf("%d", &base);

    printf("Ingresa el exponente: ");
    scanf("%d", &exponente);

    // Solución
    potencia = pow(base, exponente);

    // Mostrar Dato
    printf("\n");
    printf("La potencia es: %d", potencia);
    return 0;
}