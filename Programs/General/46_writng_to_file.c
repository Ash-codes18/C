#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr=fopen("46.txt","w");

    fprintf(ptr,"This is halua\n");
    fclose(ptr);

    return 0;
}