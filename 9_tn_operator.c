#include <stdio.h>

int main(){
    int a;
    printf("Enter your age : ");
    scanf("%d",&a);
    (a<18)? printf("You are not an adult yet") : printf("You are an adult");
    return 0;
}