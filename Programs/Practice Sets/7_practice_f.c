#include <stdio.h>

int main(){

    int a,b;
    printf("Enter the number of nos. you want to calculate the multiple of : ");
    scanf("%d",&a);
    int nos[a];
    printf("Enter The Numbers : \n");


    for(int l=0;l<a;l++){

        printf("Number %d : ",l+1);
        scanf("%d",&nos[l]);
    }

    int n = sizeof(nos)/4;

    printf("Enter the place till which you want to calculate the multiple : ");
    scanf("%d",&b);
    int arr[a][b];


    for(int i=0;i<a;i++){

        for(int k=0;k<b;k++){
            
            printf("%d times %d = %d\n",nos[i],k+1,nos[i]*(k+1));
        }
    }

    return 0;
}