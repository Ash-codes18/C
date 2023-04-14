// Better way to implement the code

#include <stdio.h>

int main(){
    char s[50];
    char c;
    int i=0,count =0;

    printf("Enter a string : ");
    gets(s);
    printf("Enter the character you want to check : ");
    scanf("%c",&c);
    
    while (s[i]!='\0')
    {
        if(s[i]==c){
            count++;
        }
        i++;
    }
    

    if(count>0){
        printf("'%c' comes %d times in the string",c,count);
    }
    else{
        printf("'%c' does not come in the string",c);
    }

    return 0;
}


//Initial implementation of the code

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char s[50];
//     printf("Enter a string : ");
//     gets(s);
//     int z[50]={0};

//     for(int i=0;i<strlen(s);i++){
//         z[i]=0;
//         for(int j=0;j<strlen(s);j++){
//             if(s[i]==s[j]){
//                 z[i]++;
//             }
//     }
//     }

//     for(int i=0;i<strlen(s);i++){
//         if(z[i]01){
//             printf("Element %c comes%d times\n",s[i],z[i]);
//         }
//     }
//     return 0;
// }


//Code corrected by bing

/*
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char s[50]; 
    printf("Enter a string : ");
    fgets(s, sizeof(s), stdin);
    int z[50]={0};
    bool counted[50]={false};

    for(int i=0;i<strlen(s);i++){
        if(!counted[i]){
            z[i]=0;
            for(int j=0;j<strlen(s);j++){
                if(s[i]==s[j]){
                    z[i]++;
                    counted[j]=true;
                }
            }
        }
    }

    for(int i=0;i<strlen(s);i++){
        if(z[i]>0){
            printf("Element %c comes%d times\n",s[i],z[i]);
        }
    }
    return 0;
}
*/