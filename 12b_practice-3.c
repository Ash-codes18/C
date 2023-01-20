#include <stdio.h>

int main(){
    int a;
    float b,c,d;
        b=0.05*a;
        c=0.2*a;
        d=0.3*a;
    printf("Enter your income in Lakhs: ");
    scanf("%d",&a);
    if (2.5<=a<5){
        printf("The income tax paid by you is : %f",b);
    }
    else if (5<=a<10){
        printf("The income tax paid by you is : %f",c);
    }
    else{
        printf("The income tax paid by you is : %f",d);
    }
    return 0;
}