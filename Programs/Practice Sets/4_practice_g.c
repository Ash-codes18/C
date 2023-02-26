// Program to find factorial of a given no. using for loop
#include <stdio.h>

int main(){
    int a;
    int b=1;
    printf("Enter the no. : ");
    scanf("%d",&a);
    for(int i =1;i<=a;i++){
        b=b*i;
    }
        printf("The factorial of the given no is : %d",b);
    return 0;
}