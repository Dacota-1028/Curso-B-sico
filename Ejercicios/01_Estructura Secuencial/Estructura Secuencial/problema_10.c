#include <stdio.h>

int main(){
    // Variables
    int t_segundos, hora, minuto, segundos;

    // Constantes
    const int HORA = 3600;
    const int MIN  = 60;

    // Ingresar datos
    printf("Tiempo en segundos: ");
    scanf("%d", &t_segundos);

    // Solución
    minuto = t_segundos % HORA;
    hora = t_segundos / HORA;

    segundos = minuto % MIN;
    minuto = minuto / MIN;

    // Mostrar Datos
    printf("\n");
    printf("Hora: %d\n", hora);
    printf("Minuto: %d\n", minuto);
    printf("Segundos: %d\n", segundos);
    return 0;
}