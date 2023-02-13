#include <stdio.h>

int natural(int n);

int main(){
    int a;
    printf("Enter the last natural no. : ");
    scanf("%d",&a);
    printf("The sum of the first %d natural nos. is : %d",a,natural(a));    
    return 0;
}

int natural(int n){
    if (n==1){
        return 1;
    }
    else{
        int calc;
        calc= n + natural(n-1);
        return calc;
    }
}
// write a c code to print prime numbers upto a given point