#include <stdio.h>
#include <string.h>

//strcat(string 1, string 2) = it is used to concatenate 2 strings

int main(){
    char str[50]="halua is";
    char *str2=" tasty";
    printf("%s",strcat(str,str2));  // the concatenated string is stored in str

    // The final string is stored in the first string mentioned in the function and the string where the final string is stored cannot be declared in the form of a pointer because then it will not be able to store the other string so the storage string should be declared in the form of an array

    return 0;
}