#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(){
    // Variables
    float area, radio;

    // Ingresar Datos
    printf("Radio: ");
    scanf("%f", &radio);

    // Solución
    area = PI * pow(radio, 2);

    // Mostrar Datos
    printf("\n");
    printf("Area: %.3f", area);
    return 0;
}