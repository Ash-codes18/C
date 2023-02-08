// Function to swap the values of 2 integers

// Will not work because it is being called by value

#include <stdio.h>

void wrong_swap(int a, int b);

int main(){
    int a,b;
    printf("Enter the value of a : ");   
    scanf("%d",&a);
    printf("Enter the value of b : ");   
    scanf("%d",&b);
    printf("The values of a and b before wrong swap are %d and %d\n",a,b);
    wrong_swap(a,b);
    printf("The values of a and b after wrong swap are %d and %d",a,b);
    return 0;
}

void wrong_swap(int a, int b){
    int temp;
    a=temp;
    a=b;
    b=temp;
}