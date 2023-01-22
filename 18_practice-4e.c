//Program to find the sum of first n natural nos. using Do While loop
#include <stdio.h>

int main(){
    int a;
    int b=0;
    int i=1;
    printf("Enter the value of n : ");
    scanf("%d",&a);
    do{
        b=b+i;
        i++;
    }while(a>=i);
    printf("%d",b);
    return 0;
}