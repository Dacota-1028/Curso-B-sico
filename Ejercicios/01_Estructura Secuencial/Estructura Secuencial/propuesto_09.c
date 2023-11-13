#include <stdio.h>

int main(){
    // Variables
    int area, perimetro, base, altura;

    // Ingresar Datos
    printf("Base: ");
    scanf("%d", &base);

    printf("Altura: ");
    scanf("%d", &altura);

    // Solución

    area = base * altura;
    perimetro = 2 * (base + altura);

    // Mostrar Datos
    printf("\n");
    printf("Area: %dcm\n", area);
    printf("Perimetro: %dcm", perimetro);

    return 0;
}