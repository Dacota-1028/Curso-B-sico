#include <stdio.h>

int main(){
    // variables
    int cantidad, nInicial, nFinal;
    cantidad = 0;

    // Ingredar datos
    printf("Numero inicial: ");
    scanf("%d", &nInicial);

    printf("Numero final: ");
    scanf("%d", &nFinal);

    // Solución
    ++nInicial;
    for (;nInicial < nFinal; nInicial++){
        //printf("\nfor: %d\n", nInicial);
        cantidad++;
    }

    // Mostrar dato
    printf("\n");
    printf("Cantidad: %d", cantidad);
    return 0;
}