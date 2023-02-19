#include <stdio.h>

int main(){
    printf("Hey!\n");
    // halua:
    // printf("Halua hai kya?");
    // goto halua;
    int a,b;
    printf("Enter the first no. : ",a);
    scanf("%d",&a);
    printf("Enter the second no. : ",a);
    scanf("%d",&b);
    (a>b)? printf("%d is greater than %d",a,b) : printf("%d is Less than %d",a,b);
    return 0;
}