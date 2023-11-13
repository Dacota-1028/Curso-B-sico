#include <stdio.h>

int main(){
    // Variables
    int minuto, segundos, cantid_horas;

    // Constantes
    const int HORA = 3600;
    const int MINUTO = 60;

    // Ingresar Datos
    printf("Cantidad en horas: ");
    scanf("%d", &cantid_horas);

    // Solución
    minuto = cantid_horas * MINUTO;
    segundos = cantid_horas * HORA;

    // Mostrar Datos
    printf("\n");
    printf("MINUTO: %d\n", minuto);
    printf("SEGUNDO: %d", segundos);

    return 0;
}