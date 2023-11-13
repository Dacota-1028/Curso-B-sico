#include <stdio.h>
#include <string.h>

int main(){
    // Variables
    int num;
    char resul[10];

    // Ingresar los Datos
    printf("Numero: ");
    scanf("%d", &num);

    // Solución
    if (num % 2 == 0){
        strcpy(resul, "PAR");
    }else{
        strcpy(resul, "IMPAR");
    }

    // Mostrar Datos
    printf("\n");
    printf("%s", resul);
    
    return 0;
}