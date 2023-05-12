#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a;
    a=(int*) malloc(6 * sizeof(int));
    
    for (int i = 0; i < 6; i++)
    {
    printf("Enter the element %d : ",i+1);
    scanf("%d",&a[i]);
    }
    

    return 0;
}