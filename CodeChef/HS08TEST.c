#include<stdio.h>
int main(){
    int a;
    float b;
    scanf("%d",&a);
    scanf("%f",&b);
    if(a%5==0){
    float c;
    c=b-(float)a-0.5;
    if(c<0) printf("%.2f",b);
    else
    printf("%.2f",c); 
    }
    else{
        printf("%.2f",b);
    }
}
