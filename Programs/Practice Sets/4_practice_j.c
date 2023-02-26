//Program to find if a no. is prime or not using While loop
#include <stdio.h>

int main(){
    int a;
    int cn = 0;
    int b =2;
    printf("Enter a no. : ");
    scanf("%d", &a);
    if (a>1){
    while(b<a){
        if (a%b==0){
            cn=1;
            break;
        }
        b++;
    }
    if(cn==1){
        printf("%d is not prime",a);
    }
    else{
        printf("%d is prime",a);
    }
    }
    else{
        printf("%d is not prime",a);
    }
    return 0;
}