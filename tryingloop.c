#include <stdio.h>

int main(){
    printf("This program provides all the multiples of a given no. till the provided range\n");
    int a;
    int b;
    int i;
    printf("Enter the no. : ");
    scanf("%d",&a);
    printf("\nEnter the upper limit of the range : ");
    scanf("%d",&b);
    for (i=0;i<b;i++){
    printf("%d\n",a*(i+1));
    }
    return 0;
}