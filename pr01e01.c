#include <stdio.h>

int main(){
    int array[]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        printf("La direccion en memoria del elemento %d de tu arreglo es: %p \n", i+1, &array[i]);
    }
    printf("El tamaño de un entero es de %d bytes\n", sizeof(int));
    return 0;
}
