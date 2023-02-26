#include <stdio.h>

int main(){
    int i=5;
    printf("%u\n%u",&i,_ADDRESSOF(i));  
    return 0;
}