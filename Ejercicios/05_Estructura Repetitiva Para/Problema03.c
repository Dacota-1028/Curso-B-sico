#include <stdio.h>

int main(){
    // Variables
    int nInicial, nFinal, cPares;

    // Ingresar Datos
    printf("Numero inicial: ");
    scanf("%d", &nInicial);

    printf("Numero final: ");
    scanf("%d", &nFinal);

    // Solución
    ++nInicial;
    for (; nInicial < nFinal; nInicial++){
        if (nInicial % 2 == 0){
            cPares++;
        }
    }

    // Mostrar datos
    printf("\n");
    printf("Pares: %d", cPares);
    return 0;
}