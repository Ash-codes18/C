#include <stdio.h>

int main(){
    char s[32];
    char cs[32];
    int i=0;

    printf("Enter the String : ");
    gets(s);

    while (s[i]!='\0')
    {
        cs[i]=s[i];  
        i++;  
    }
    cs[i]='\0';

    printf("The original string is : %s\n",s);
    printf("The copied string is : %s",cs);
    return 0;
}