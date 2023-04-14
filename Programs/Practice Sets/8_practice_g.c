#include <stdio.h>

int main(){
    char s[50];
    char c;
    int i=0;
    int checker=0;
    printf("Enter the string : ");
    gets(s);
    printf("Enter the character to check : ");
    scanf("%c",&c);
    while(s[i]!='\0'){
        if(s[i]==c){
            checker=1;
        }
        i++;
    }

    if(checker==1){
        printf("The character is present in the string");
    }
    else{
        printf("The character is not present in the string");
    }

    return 0;
}