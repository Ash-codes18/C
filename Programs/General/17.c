#include <stdio.h>

int sum(int a,int b);

int main(){
    int c,d,e;
    printf("Enter the first no. : ");
    scanf("%d",&c);
    printf("Enter the second no. : ");
    scanf("%d",&d);
    e = sum(c,d);
    printf("The sum of given nos. is %d",e);
    return 0;
}

int sum(int a, int b){
    int sol;
    sol=a+b;
    return sol;
}