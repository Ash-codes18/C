#include <stdio.h>
#include <math.h>
int main(){
    int a = 10; //Type declaration instruction
    int z;
    int b = 2;
    // char c;
    z=5;
    // c='Halua';
    printf("%d \n%f\n",a,b);
    printf("The value of a+b is : %d\n",a+b); //Arithmetic Instructions
    printf("The value of a-b is : %d\n",a-b);
    printf("The value of a*b is : %d\n",a*b);
    printf("The value of a/b is : %d\n",a/b);
    printf("The value of a%b is : %d\n",a%z);
    printf("The value of a to the power z is : %f\n",pow(a,2));
    return 0;
}