#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr=fopen("49.txt","r+");

    char c=fgetc(ptr);

    while (c!=EOF)
    {
        printf("%c",c);
        c=fgetc(ptr);
    }
    fclose(ptr);
    

    return 0;
}