#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the marks obtained in Physics : ");
    scanf("%d",&a);
    printf("Enter the marks obtained in Chemistry : ");
    scanf("%d",&b);
    printf("Enter the marks obtained in Maths : ");
    scanf("%d",&c);
    int d = (a+b+c)/3;
    if (d<40){
        printf("You are fail!, Your percentage is %d",d);
    }
    else if(a<33 || b<33 || c<33){
        printf("You are fail!, Your percentage is %d",d);
    }
    else{
        printf("You are pass!, Your percentage is %d",d);
    }
    return 0;
}