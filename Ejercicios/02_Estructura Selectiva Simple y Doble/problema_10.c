#include <stdio.h>

int main(){
    // Variables
    float consumo,
          m_descuento,
          impuesto,
          i_pagar;

    // Cosntantes
    const float D1 = 0.1f;
    const float D2 = 0.2f;
    const float D3 = 0.3f;
    const float IGV = 0.19f;

    // Ingresar Datos
    printf("Consumo: ");
    scanf("%f", &consumo);

    // Solución
    if (consumo <= 100){
        m_descuento = consumo * D1;
        impuesto = (consumo - m_descuento) * IGV;
        i_pagar = (consumo + impuesto) - m_descuento;
    }else if(consumo > 100 && consumo <= 200){
        m_descuento = consumo * D2;
        impuesto = (consumo - m_descuento) * IGV;
        i_pagar = (consumo + impuesto) - m_descuento;
    }else{
        m_descuento = consumo * D3;
        impuesto = (consumo - m_descuento) * IGV;
        i_pagar = (consumo + impuesto) - m_descuento;
    }

    // Mostrar Datos
    printf("\n");
    printf("Monto del descuento: %.1f\n", m_descuento);
    printf("Impuesto: %.1f\n", impuesto);
    printf("Monto total: %.1f", i_pagar);

    return 0;
}