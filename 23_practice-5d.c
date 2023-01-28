#include <stdio.h>

int fibo(int a);

int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Element no. %d of the fibonnaci series is %d",n,fibo(n));
    return 0;
}

int fibo(int a){
    if(a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    else{
        int fib;
        fib=fibo(a-1)+fibo(a-2);
        return fib;
    }
}
