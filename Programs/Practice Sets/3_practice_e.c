#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Please Enter four numbers below... \n");
    printf("Enter the first no. : ");
    scanf("%d",&a);
    printf("Enter the second no. : ");
    scanf("%d",&b);
    printf("Enter the third no. : ");
    scanf("%d",&c);
    printf("Enter the fourth no. : ");
    scanf("%d",&d);
    if (a>b && a>c && a>d){
        printf("The greatest among the four nos. is %d i.e the first no.",a);
    }
    else if (b>a && b>c && b>d){
        printf("The greatest among the four nos. is %d i.e the second no.",b);
    }
    else if (c>a && c>b && c>d){
        printf("The greatest among the four nos. is %d i.e the third no.",c);
    }
    else if (d>a && d>b && d>c){
        printf("The greatest among the four nos. is %d i.e the fourth no.",d);
    }
    return 0;
}