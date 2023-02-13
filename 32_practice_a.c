#include <stdio.h>

int main(){
    int a[10];
    int *z=&(a[0]);   
    for (int i=0;i<10;i++){
        printf("Enter the Element %d of the array : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n The third element of the array is : %d",*(z+2));
    return 0;
}