//Age verifier
#include <stdio.h>

int main(){
    int a;
    printf("Age verifier\n");
    printf("Enter your age : ");
    scanf("%d",&a);
    if (a<18 || a>80){
        printf("You cannot drive a vehicle");
    }
    else{
        printf("You can drive a vehile");
    }
    return 0;
}