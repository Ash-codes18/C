#include <stdio.h>
#include <stdlib.h>

void sort(int a[],int s){
    int temp;
    for (int i = 1; i < s; i++)
    {
        if(a[i-1]>a[i]){
            temp=a[i-1];
            a[i-1]=a[i];
            a[i]=temp;
        }
    }
    
}


int main(){
    int a;
    printf("Enter the no. of elements in the array : ");
    scanf("%d",&a);

    int *ptr;
    ptr=(int*) malloc(a*sizeof(int));

    for (int i = 0; i < a; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&ptr[i]);
    }
    
    sort(ptr,a);

    printf("The largest element in the array is : %d",ptr[a-1]);
    
    return 0;
}