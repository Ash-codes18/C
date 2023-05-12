#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a;
    a=(int *)malloc(10*sizeof(int));
    
    for (int i = 0; i < 10; i++)
    {
        a[i]=7*(i+1);
        printf("7 x %d = %d\n",i+1,a[i]);
    }
    
    printf("\nAfter Reallocating....\n\n");

    for (int i = 0; i < 15; i++)
    {
        a[i]=7*(i+1);
        printf("7 x %d = %d\n",i+1,a[i]);
    }
    return 0;
}