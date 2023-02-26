//Trying to change the value in main through a function by calling the function by value

#include <stdio.h>

int ten(int a);

int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("The value of n before calling the function is : %d\n",n);
    ten(n);
    printf("The value of n after calling the function is : %d",n);
    return 0;
}

 int ten(int a){
        int temp;
        temp = a*10; 
        return temp;
    }