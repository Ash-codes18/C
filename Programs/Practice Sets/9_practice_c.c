#include <stdio.h>

typedef struct complex
{
    int a;
    int b;
}cpx;

void display(cpx c[]){
    for(int i=0;i<5;i++){
        printf("Complex no. %d is : %d + %di\n",i+1,c[i].a,c[i].b);
    }
}


int main(){
    
    cpx c[5];

    for(int i=0;i<5;i++){
        printf("Enter the real no. : ");
        scanf("%d",&c[i].a);
        printf("Enter the imaginary no. : ");
        scanf("%d",&c[i].b);
    }

    display(c);


    return 0;
}