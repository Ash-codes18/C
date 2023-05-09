#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr=fopen("48.txt","w");

    putc('c',ptr);
    putc('a',ptr);
    putc('t',ptr);

    fclose(ptr);

    return 0;
}