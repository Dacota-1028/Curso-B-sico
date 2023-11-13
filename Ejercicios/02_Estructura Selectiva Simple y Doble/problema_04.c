#include <stdio.h>
#include <string.h>

int main(){
    // Variables
    int num;
    char result[15];

    // Ingresar Dato
    printf("Numero: ");
    scanf("%d", &num);

    // Solución
    if (num % 3 == 0 && num % 5 == 0){
        strcpy(result, "ES MULTIPLO");
    }else{
        strcpy(result, "NO ES MULTIPLO");
    }

    // Mostrar Datos
    printf("\n");
    printf("%s", result);
    return 0;
}