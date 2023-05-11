#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *ptr;
    ptr=(int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of element %d : ",i+1);
        scanf("%d",&ptr[i]);
    }
    
    printf("\nThe elements are :  ");
    for (int i = 0; i < 10; i++){
        printf("%d ",ptr[i]);
    }

    return 0;
}