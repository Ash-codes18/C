#include <stdio.h>

int main(){
    int a;
    float b;
    printf("Enter your income : ");
    scanf("%d",&a);
    if(a<250000){
        b=0;
    }
    else if (250000<=a<500000){
        b=0.05*a;
        // printf("The income tax paid by you is : %f",b);
    }
    else if (500000<=a<1000000){
        b=0.2*a;
        // printf("The income tax paid by you is : %f",b);
    }
    else{
        b=0.3*a;
    }
        printf("The income tax paid by you is : %f",b);
    return 0;
}   