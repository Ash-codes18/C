//Program to calculate the area of a circle
#include <stdio.h>

int main(){
    int a;
    float pi = 3.14;
    printf("Enter the radius of the circle : ");
    scanf("%d",&a);
    printf("The area of the circle of provided radius is : %f",pi*a*a);
    return 0;
}
