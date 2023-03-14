#include <stdio.h>
#include <string.h>

//strlen tells the length of the string excluding the null character

int main(){
    char *h="halua hai kya";
    printf("The length of the string '%s' is : %d",h,strlen(h));
    return 0;
}