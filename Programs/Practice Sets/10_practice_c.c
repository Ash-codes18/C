#include <stdio.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    ptr=fopen("10_b.txt","r");
    ptr1=fopen("10_c.txt","w+");

    char c;
    c=fgetc(ptr);
    while (c!=EOF)
    {
        fprintf(ptr1,"%c",c);
        c=fgetc(ptr);
    }
    

    return 0;
}