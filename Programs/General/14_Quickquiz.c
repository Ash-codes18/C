#include <stdio.h>

int main(){
    int a;
    printf("Enter the last natural no. in the list : ");
    scanf("%d",&a);
    for (int i = 0; i < a; a--)
    {
        printf("%d\n",a);
    }
    
    return 0;
}