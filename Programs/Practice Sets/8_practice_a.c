#include <stdio.h>
#include <string.h>

int main(){
    char s[10];
    int count=0,i=0;


    printf("Input the String : ");
    scanf("%s",&s);
    while (s[i]!='\0')
    {
        count++;
        i++;

    }
    
    printf("The length of the string is : %d\n",count);
    printf("Length of string using library function : %d",strlen(s));
    return 0;
}