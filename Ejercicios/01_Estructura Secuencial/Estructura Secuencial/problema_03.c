#include <stdio.h>

int main(){
    // Variables
    float valor_venta, igv, precio_venta;

    // Constantes
    const float IGV = 0.19f;

    // Ingresar Datos
    printf("Valor de venta: ");
    scanf("%f", &valor_venta);

    // Solución
    igv = valor_venta * IGV;
    precio_venta = valor_venta + igv;

    // Mostrar Datos
    printf("\n");
    printf("El IGV: %.2f\n", igv);
    printf("El precio de venta: %.2f", precio_venta);
    return 0;
}