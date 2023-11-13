#include <stdio.h>
#include <math.h>

int main(){
    // Variables
    int a, b, c, d;

    // Ingresar Datos
    printf("Ingresar a: ");
    scanf("%d", &a);

    printf("Ingresar b: ");
    scanf("%d", &b);

    // Solución
    c = (4 * pow(a, 4.0) + 3 * b * a + pow(b, 2.0)) / (pow(a, 2.0) - pow(b, 2.0));

    d = (3 * pow(c, 2.0) + a + b) / 4;

    // Mostrar Datos
    printf("\n");
    printf("Dato C: %d\n", c);
    printf("Dato D: %d", d);
    return 0;
}