#include <stdio.h>

int main(){
    int a;
    printf("Enter the no. you want the table of : ");
    scanf("%d",&a);
    for (int i=1;i<11;i++){
        printf("%d\n",a*i);
    }
    return 0;
}