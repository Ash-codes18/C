//C program to calc. the area of a sq. using library function
#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Enter the value of the side of the square : ");
    scanf("%d",&a);
    printf("The area of the square is : %f",pow(a,2));
    return 0;
}