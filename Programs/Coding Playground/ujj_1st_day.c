#include <stdio.h>

int main(){
    int a;
    printf("Enter the no. of rows in the pattern : ");
    scanf("%d",&a);
    for (int i =1;i<=a;i++){
        for (int j=1; j<=i;j++){
        printf("%d",i);
        }
    printf("\n");
    }
    return 0;
}