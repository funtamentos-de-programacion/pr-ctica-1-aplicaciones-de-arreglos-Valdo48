#include <stdio.h>

int main(){
    int array[]={1,2,3};
     printf("La primer dirreccion del arreglo es %p \n", array);
     printf("La direccion del arreglo es %p \n", &array[0]);

     return 0;
}
