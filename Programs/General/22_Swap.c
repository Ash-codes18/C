// Function to swap the values of 2 integers

// Works because the function is called by address 

#include <stdio.h>

void swap (int *a , int *b);

int main(){
    int a,b;
    printf("Enter the value of a : ");   
    scanf("%d",&a);
    printf("Enter the value of b : ");   
    scanf("%d",&b);
    printf("The values of a and b before swap are %d and %d\n",a,b);
    swap(&a,&b);
    printf("The values of a and b after swap are %d and %d",a,b);
    return 0;
}

void swap (int *a , int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}