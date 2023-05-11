#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int *f;
    f= (int *) calloc(n, sizeof(int));
    
    printf("The elements of the array before giving the values input : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ",f[i]);
    }
    printf("\n");

    //Taking input from user
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d of the array : ",i+1);
        scanf("%d",&f[i]);
    }

printf("The elements in the array are : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ",f[i]);
    }
    

    
    return 0;
}