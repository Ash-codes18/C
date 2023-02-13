#include <stdio.h>
void pass(int a);

int main(){
    int i;
    printf("The address of i is %u\n",&i);
    int j = i ;
    printf("The address of j is %u\n",&j);
    printf("Calling the address of i through a function : ");
    pass(i);
    return 0;
}

void pass(int a){
    printf("%u",&a);
}
//The addresses are not same since the new variable takes another space in the memory blocks .