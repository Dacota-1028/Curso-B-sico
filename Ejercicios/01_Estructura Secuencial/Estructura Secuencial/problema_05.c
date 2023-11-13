#include <stdio.h>
#include <math.h>

int main(){
    // Variables
    int radicando, indice, raiz;

    // Ingresar Datos
    printf("Radicando: ");
    scanf("%d", &radicando);

    printf("Indice: ");
    scanf("%d", &indice);

    // Solución
    raiz  = pow(radicando, (1.0 / indice));

    // Mostrar Datos
    printf("\n");
    printf("La Radicacion: %d", raiz);
    return 0;
}