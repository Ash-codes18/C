#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a;
    a=(int*) malloc(6 * sizeof(int));
    printf("Array capable of storing 6 integers has been created");
    return 0;
}