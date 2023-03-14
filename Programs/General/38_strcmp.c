#include <stdio.h>
#include <string.h>

/*

strcmp(string1,string2):

Returns 0 if both the strings are same

Returns a negative value (-1) if the first mismatching character in the second string is greater than the first mismatchign character in the first string and returns a positive value (1) for the opposite     

*/

int main(){
    char *s="Halua is tasty";
    char *s2="Halua is not tasty";
    int val=strcmp(s,s2);
    printf("%d",val);
    return 0;
}