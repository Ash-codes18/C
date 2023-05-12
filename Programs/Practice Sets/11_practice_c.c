#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a;
    a=(int*) calloc(6,sizeof(int));
    printf("Array capable of storing 6 integers has been created and initialized to 0");
    return 0;
}