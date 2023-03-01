#include <stdio.h>

int main(){
    int a;
    int b=0;
    printf("Enter the no. :");
    scanf("%d",&a);
    int i=2;
    if(a>1){
    for(i;i<a;i++){
        if(a%i==0){
            b=1;
        }
    }
    if(b==1){
        printf("The given no. is not prime ");
    }
    else{
        printf("The given no. is prime");
    }
    }
    else{
        printf("The given is no. is not prime");
    }
    return 0;
}