#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
printf("Welcome to Encryptor/Decryptor!");
    while (true)
    {   int a;
        printf("\n\n");
        printf("Option 1 : Encrypt\n");
        printf("Option 2 : Decrypt\n");
        printf("Option 3 : Quit\n\n");
        printf("Enter your choice : ");
        scanf("%d",&a);
        getchar(); // consume the newline character in the input buffer
        printf("\n");

        if(a==1){
             char s[250];
            int i=0;

            printf("Enter the String : ");
            fgets(s, 250, stdin);

            int cs[strlen(s)];

            while (s[i]!='\0')
            {
                cs[i]=(int)s[i];    
                cs[i]=cs[i]+1;
                i++;
            }

            printf("\nThe encrypted string is : ");

            for(int j=0;j<strlen(s);j++){
            printf("%c",(char)cs[j]);
            }
        }
        else if(a==2){
            char z[250];
            int q=0;

            printf("Enter the encrypted code : ");
            fgets(z, 250, stdin);

            int css[strlen(z)];

            while (z[q]!='\0')
            {
                css[q]=(int)z[q];    
                css[q]=css[q]-1;
                q++;
            }

            printf("\nThe decrypted string is : ");

            for(int j=0;j<strlen(z);j++){
            printf("%c",(char)css[j]);
            }
            printf("\n");
        }
        else if (a==3){
            break;
        }
        else{
            printf("\nNot a valid option\n\n");
        }
    }
    
    return 0;
}
