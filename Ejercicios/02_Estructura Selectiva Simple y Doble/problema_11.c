#include <stdio.h>
#include <string.h>

int main(){
    // Variables
    int temperatura;
    char clima[10];

    // Ingresar Datos
    printf("Temperatura: ");
    scanf("%d", &temperatura);

    // Solución
    if (temperatura < 10){
         strcpy(clima, "FRIO");
    }else if( temperatura >= 10 && temperatura <= 20){
         strcpy(clima, "NUBLADO");
    }else if( temperatura > 20 && temperatura <= 30){
        strcpy(clima, "CALOR");
    }else if( temperatura > 30){
        strcpy(clima, "TROPICAL");
    }

    // Mostrar Datos
    printf("\n");
    printf("Tipo de Clima: %s", clima);
    return 0;
}