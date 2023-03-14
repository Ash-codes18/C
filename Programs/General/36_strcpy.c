#include <stdio.h>
#include <string.h>

//strcpy( target, source)

int main(){
    char *st="Jeewan halua hai";
    char str[50];
    strcpy(str,st);
    printf("The string st has been copied in str\n verification : \n st = %s \n str = %s",st,str);
    return 0;
}