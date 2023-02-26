#include <stdio.h>
int main(){
    int a;
    printf("Enter the no. : ");
    scanf("%d",&a);
    int b=0;
    int c;
    printf("Enter the last no. you want to multiple %d with : ",a);
    scanf("%d",&c);
    int d=0;
    int e=0;
    while(b<=c){
        d=a*b;
        b++;
        e=e+d;
    }
    printf("The sum of the multiples of %d till %d is : %d",a,c,e);
    return 0;
}