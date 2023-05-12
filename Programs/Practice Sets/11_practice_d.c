#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a;
    a=(int*) malloc(5 * sizeof(int));
    printf("An array capable of storing 5 integers has been created");
    printf("\n");
    a=realloc(a,10*sizeof(int));
    printf("The same array can now store 10 integers");


    return 0;
}