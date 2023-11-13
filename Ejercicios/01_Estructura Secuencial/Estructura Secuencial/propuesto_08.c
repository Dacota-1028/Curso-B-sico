#include <stdio.h>

int main(){
    // variables
    float fahrenheit, Celcius, kelvin;

    // Ingresar datos
    printf("Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Solución
    Celcius = (fahrenheit - 32) * 5 / 9;
    kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;

    // Mostrar datos
    printf("\n");
    printf("Celcius: %.2f\n", Celcius);
    printf("Kelvin: %.2f", kelvin);
}