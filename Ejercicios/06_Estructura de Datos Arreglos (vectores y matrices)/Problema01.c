#include <stdio.h>

void ingresarDatos(int numeros[], int num);
void mostrarDatos(int numeros[], int num);
int suma(int numeros[], int num);

int main(){
    // Variables
    int NUM = 5;
    int numero[NUM];
    int resultado = 0;


    ingresarDatos(numero, NUM);
    mostrarDatos(numero, NUM);
    resultado = suma(numero, NUM);
    printf("\nLa suma es: %d", resultado);

    return 0;
}

void ingresarDatos(int numeros[], int num){
    
    printf("Ingresar datos: \n");
    for (int i = 0; i < num; i++){
        printf("[%d] numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
}

void mostrarDatos(int numeros[], int num){
    for (int i = 0; i < num; i++){
        printf("Dato [%d]: %d\n", i+1, numeros[i]);
    }
}

int suma(int numeros[], int num){
    int suma = 0;

    for (int i = 0; i < num; i++){
        suma += numeros[i];
    }
    return suma;
}