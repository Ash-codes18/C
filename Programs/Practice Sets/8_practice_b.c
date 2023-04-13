#include <stdio.h>

void slice(int a,int b, char s[]){
    char ns[100];
    int i=0;

    while(a!=b+1){
        ns[i]=s[a];
        a++;
        i++;
    }
    ns[i]='\0';
    printf("%s",ns);

}

int main(){
    char s[100];
    int m,n;

    printf("Enter the string : ");
    // scanf("%s",s); // removed as it takes only one word input
    gets(s);
    printf("Enter the starting index for the new string : ");
    scanf("%d",&m);
    printf("Enter the ending index for the new string : ");
    scanf("%d",&n);

    printf("The new string is : ");
    slice(m,n,s);

    return 0;
}