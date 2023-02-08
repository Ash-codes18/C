#include <stdio.h>

int main(){
    int i;
    printf("The address of i is %u\n",&i);
    int j = i ;
    printf("The address of j is %u",&j);
    return 0;
}

//The addresses are not same since the new variable takes another space in the memory blocks .