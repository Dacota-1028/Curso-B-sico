#include <stdio.h>
#include <math.h>

int main(){
    // Variables
    int area, perimetro, lado;

    // Ingresar datos
    printf("Lado de un cuadrado: ");
    scanf("%d", &lado);

    // Solución
    perimetro = lado + lado + lado + lado;
    area = pow(lado, 2.0);

    // Mostrar datos
    printf("\n");
    printf("PERIMETRO: %d\n", perimetro);
    printf("AREA: %d", area);
    return 0;
}