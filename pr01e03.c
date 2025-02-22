#include <stdio.h>

int main(){
    int matrix[2][3]={{1,2,3},{4,5,6}};

    printf("La direccion del elemento matrix es %p \n", matrix);
    printf("La direccion del elemento matrix[0] es %p \n", matrix[0]);
    printf("La direccion del elemento matrix[0][0] es %p \n", &matrix[0][0]);

    return 0;

}
