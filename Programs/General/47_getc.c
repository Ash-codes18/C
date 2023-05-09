//fgetc is used to read a file line by line

#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr=fopen("46.txt","r");

    if(ptr==NULL){
        printf("The file does not exist");
    }

    else{
        char c;
        c=fgetc(ptr);
        fclose(ptr);
        printf("%c\n",c);
    }

    return 0;
}