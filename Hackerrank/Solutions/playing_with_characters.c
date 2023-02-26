#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[20];
    char sen[100];
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s",s);
    printf("%s\n",s);
     scanf("\n");
    scanf("%[^\n]s", sen);
   printf("%s", sen);  
    return 0;
}
