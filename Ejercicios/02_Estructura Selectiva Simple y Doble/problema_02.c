#include <stdio.h>
#include <string.h>

int main(){
    // variables
    int numero;
    char resultado[10];

    // Ingresar Dato
    printf("Numero: ");
    scanf("%d", &numero);

    // Solución
    if (!numero){
        strcpy(resultado, "NEUTRO");
    }else{
        if (numero < 0){
            strcpy(resultado, "NEGARIVO");
        }else{
            strcpy(resultado, "POSITIVO"); 
        }
    }

    // Mostrar datos
    printf("\n");
    printf("Resultado: %s", resultado);
    return 0;
}