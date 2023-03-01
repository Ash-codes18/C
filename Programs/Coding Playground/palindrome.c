#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int z=x;
    
    //Palindrome
    
    int a,b=0;
    while(x>0){
        a=x%10;
        b=(b*10)+a;
        x=x/10;
    }
    if(z==b){
        printf("Yes");
    }
    else{
        printf("no");
    }
    return 0;
}