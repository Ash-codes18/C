// Program to find factorial of a given no. using while loop
#include <stdio.h>

int main(){
    int a;
    printf("Enter a no. : ");
    scanf("%d",&a);
    int b=0;
    int c=1;
    while(b<a){
        b++;
        c=c*b;
    }
    printf("The factorial of %d is : %d",a,c);
    return 0;
}