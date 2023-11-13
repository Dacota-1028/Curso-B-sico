#include <stdio.h> 

int main(){
    // Variables
    int cant_milimetros,
        metros,
        decimentros,
        centimetros,
        milimetros;

    // Constantes
    const int METRO = 1000;
    const int DECIM = 100;
    const int CENTI = 10;

    // Ingresar Datos
    printf("Cantidad de milimetros: ");
    scanf("%d", &cant_milimetros);

    // Solución

    decimentros = cant_milimetros % METRO;
    metros = cant_milimetros / METRO;

    centimetros = decimentros % DECIM;
    decimentros = decimentros / DECIM;

    milimetros = centimetros % CENTI;
    centimetros = centimetros / CENTI;

    // Mostrar Datos
    printf("\n");
    printf("Metro: %d\n", metros);
    printf("Decimentro: %d\n", decimentros);
    printf("Centimetro: %d\n", centimetros);
    printf("Milimetro: %d\n", milimetros);

    return 0;
}