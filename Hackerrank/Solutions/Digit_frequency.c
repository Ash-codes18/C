#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[100];
    fgets(s,100,stdin);
    printf("%s",s[1]);
    return 0;
}
