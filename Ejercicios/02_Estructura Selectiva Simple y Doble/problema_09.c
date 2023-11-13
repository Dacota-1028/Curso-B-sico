#include <stdio.h>

int main(){
    // Variables
    float consumo, m_descuento, impuesto, i_pagar;

    // Constantes
    const float D1 = 0.1;
    const float D2 = 0.2;
    const float IGV = 0.19;

    // Ingresar Datos
    printf("Consumo: ");
    scanf("%f", &consumo);

    // Solución
    if (consumo <= 100){
        m_descuento = consumo * D1;
        impuesto = (consumo - m_descuento) * IGV;
        i_pagar = (consumo + impuesto) - m_descuento;
    }else{
        m_descuento = consumo * D2;
        impuesto = (consumo - m_descuento) * IGV;
        i_pagar = (consumo + impuesto) - m_descuento;
    }

    // Mostrar Datos
    printf("\n");
    printf("Monto de descuento: %.1f\n", m_descuento);
    printf("consumo: %.1f\n", consumo);
    printf("Impuesto: %.1f\n", impuesto);
    printf("Pago total: %.1f", i_pagar);
    return 0;
}