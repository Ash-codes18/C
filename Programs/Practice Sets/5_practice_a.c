#include <stdio.h>

float avg(int a, int b, int c);

int main(){
    int f,g,h;
    printf("Enter the first no. : ");
    scanf("%d",&f);
    printf("Enter the second no. : ");
    scanf("%d",&g);
    printf("Enter the third no. : ");
    scanf("%d",&h);
    printf("The value of the avg of %d, %d and %d is : %f",f,g,h,avg(f,g,h));
    return 0;
}

float avg(int a, int b, int c){
    return (float)(a+b+c)/3;
}