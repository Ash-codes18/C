#include <stdio.h>

int main(){
    // 97-122 = a-z
    char a;
    printf("Enter the character you want to check : ");
    scanf("%c",&a);
    if (a>=97 && a<=122){
        printf("The given character is Lowercase ");
    }
    else{
        printf("The given character is not Lowercase");
    }
    return 0;
}