#include <stdio.h>

float force(float a);

int main(){
    int m;
    printf("Enter the mass of the body : ");
    scanf("%d",&m);
    printf("The Force of attraction on the given body is : %0.1f",force(m));
    return 0;
}

float force(float a){
    return a*9.8;
}