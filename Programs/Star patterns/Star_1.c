#include <stdio.h>

int main(){
    int n;
    printf("Enter the no. of the rows in the pattern : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}