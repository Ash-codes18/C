#include <stdio.h>

int main(){
    char str[]="Ashmit";
    char *ptr =str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}