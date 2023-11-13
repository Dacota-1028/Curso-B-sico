#include <stdio.h>
#include <string.h>

int main(){
    // Variables
    char vocal;
    char resultado[15];

    // Ingresar Datos
    printf("Ingresar Vocal: ");
    scanf("%c", &vocal);

    // Solución
    if (vocal == 'a' || vocal == 'A'){
        strcpy(resultado, "VOCAL");
    }else if(vocal == 'e' || vocal == 'E'){
        strcpy( resultado, "VOCAL");
    }else if(vocal == 'i' || vocal == 'I'){
        strcpy(resultado, "VOCAL");
    }else if(vocal == 'o' || vocal == 'O'){
        strcpy(resultado, "VOCAL");
    }else if(vocal == 'u' || vocal == 'U'){
        strcpy(resultado, "VOCAL");
    }else{
        strcpy(resultado, "NO ES VOCAL");
    }

    // Mostrar Datos
    printf("\n");
    printf("%s", resultado);
    return 0;
}