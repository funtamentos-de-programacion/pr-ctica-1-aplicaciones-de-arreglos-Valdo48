#include <stdio.h>

int main(){
    int matrix[2][3]={{1,2,3},{4,5,6}};

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("La direccion en memoria del elemento (%d,%d) de su arreglo es %p \n", i+1, j+1, &matrix[i][j]);
        }
    }
    return 0;
}
