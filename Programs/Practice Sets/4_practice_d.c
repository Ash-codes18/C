//Program to find the sum of first n natural nos. using For loop
#include <stdio.h>

int main(){
    int a;
    int b=0;
    printf("Enter the value of n : ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        b=b+i;
    printf("%d\n",b);
    }
    return 0;
}