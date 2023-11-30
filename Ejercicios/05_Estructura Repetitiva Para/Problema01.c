#include <stdio.h>

int main(){

    // Variables
    int num, suma;

    // Ingredar datos
    printf("Numero: ");
    scanf("%d", &num);

    // Solución
    for(int i = 0; i <= num; i++){
        suma += i;
    }

    // Mostrar datos
    printf("\n");
    printf("La suma es: %d", suma);
    return 0;
}