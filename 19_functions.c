#include <stdio.h>
void halua(); //Function Prototype
int main(){
    int a;
    printf("I have made a function named halua.\n");
    printf("Now in the next line i will call its definition.\n");
    halua(); //Function Call
    return 0;
}
void halua(){  //Function Definition
    printf("Halua is very very tasty!");
}