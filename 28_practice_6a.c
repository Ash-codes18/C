#include <stdio.h>

int main(){
    int a=5;
    int *b = &a;
    printf("The address of a is %u\n",&a);
    printf("The value of a is %d",*(b));
    return 0;
}
