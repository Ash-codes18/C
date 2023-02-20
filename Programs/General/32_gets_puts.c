#include <stdio.h>

int main(){
    char s[50];
    printf("Enter the String : ");
    gets(s);
    puts(s); // It works the same as print function but it only prints a string and nothing else
    printf("Your string is : %s",s);

    return 0;
}