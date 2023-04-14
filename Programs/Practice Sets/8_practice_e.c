//Decryptor for 8th_d

#include <stdio.h>

int main(){
    char s[32];
    int i=0;

    printf("Enter the encrpyted code : ");
    gets(s);

    int cs[strlen(s)];

    while (s[i]!='\0')
    {
        cs[i]=(int)s[i];    
        cs[i]=cs[i]-1;
        i++;
    }

    printf("The decrypted string is : ");

    for(int j=0;j<strlen(s);j++){
    printf("%c",(char)cs[j]);
    }
    return 0;
}