#include <stdio.h>
#include <string.h>

int main(){
    // Constantes
    const float D1 = 0.15f;
    const float D2 = 0.20f;

    const float R1 = 0.10f;
    const float R2 = 0.05f;

    // Variables
    float mCompra;
    char tCliente;
    char fPago;
    float ajustes;
    float totalPagar;
    char tipoPago[10] = "demo";

    // Ingredar Datos
    printf("Monto de la compra: ");
    scanf("%f", &mCompra);

    getchar();
    printf("Tipo de cliente, General(g) o Afiliado(A): ");
    tCliente = getchar();

    getchar();

    printf("Forma de pago, Contado(C) o Plazos(P): ");
    fPago = getchar();

    // Solución
    if (tCliente == 'G' || tCliente == 'g'){
        if (fPago == 'c' || fPago == 'C'){
            ajustes = mCompra * D1;
            totalPagar = mCompra - ajustes;
            strcpy(tipoPago, "DESCUENTO");
        }else if(fPago == 'p' || fPago == 'P'){
            ajustes = mCompra * R1;
            totalPagar = mCompra + ajustes;
            strcpy(tipoPago, "RECARGO");
        }
    }else if(tCliente == 'A' || tCliente == 'a'){
        if (fPago == 'c' || fPago == 'C'){
            ajustes = mCompra * D2;
            totalPagar = mCompra - ajustes;
            strcpy(tipoPago, "DESCUENTO");
        }else if(fPago == 'p' || fPago == 'P'){
            ajustes = mCompra * R2;
            totalPagar = mCompra + ajustes;
            strcpy(tipoPago, "RECARGO");
        }
    }else{
        printf("Cliente incorrecto\n");
    }

    // Mostrar Datos
    printf("\n");
    printf("%s: %.2f\n", tipoPago, ajustes);
    printf("Total a pagar: %.2f\n", totalPagar);
    return 0;
}