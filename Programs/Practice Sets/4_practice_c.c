//Program to find the sum of first n natural nos. using while loop
#include <stdio.h>

int main(){
    int a;
    printf("Enter the value of n : ");
    scanf("%d",&a);
    int i=0;
    int b=0;
    while (a>i)
    {
        i++;
        b=b+i;
    }
    printf("%d\n",b);
    return 0;
}
//Formula for the sum of first n natural nos.(n(n+1))/2