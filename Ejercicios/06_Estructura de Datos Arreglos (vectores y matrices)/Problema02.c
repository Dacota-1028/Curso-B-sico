#include <stdio.h>

#define MAX 5

int numeroMayor(int numeros[], int num);

int main(){
    // Variables
    int arrayNum[MAX] = {45, 36, 86, 75, 15};
    int mayor = 0;

    mayor = numeroMayor(arrayNum, MAX);
    printf("\n El numero mayor es: %d", mayor);
    return 0;
}

int numeroMayor(int numeros[], int num){
    int numMayor = 0;

    for (int i = 0; i < num; i++){
        if ( numeros[i] > numMayor){
            numMayor = numeros[i];
        }
    }

    return numMayor;
}