#include <stdio.h>

int main(){
    // Variables
    int numero, numero_inverso, resto;

    // Constantes
    const int DATO = 10;

    // Ingresar Datos
    printf("Numero: ");
    scanf("%d", &numero);

    // Solución
    resto = numero % DATO;
    numero = numero / DATO;
    numero_inverso = resto * DATO;

    resto = numero % DATO;
    numero = numero / DATO;
    numero_inverso = (numero_inverso + resto) * DATO;

    resto = numero % DATO;
    numero = numero / DATO;
    numero_inverso = (numero_inverso + resto) * DATO;

    resto = numero % DATO;
    numero = numero / DATO;
    numero_inverso = ((numero_inverso + resto) * DATO) + numero;


    // Mostrar datos
    printf("\n");
    printf("Numero inverso: %d\n", numero_inverso);

    return 0;
}