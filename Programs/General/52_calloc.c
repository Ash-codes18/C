#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *f;
    f= (int *) calloc(5, sizeof(int));
    
    printf("%d",f[1]);
    
    return 0;
}