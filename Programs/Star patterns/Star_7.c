#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the no. of rows in the pattern : ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf("  ");

        for (j = 1; j <= i; j++)
            printf(" * ");

        printf("\n");
    }
     for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++){

            printf(" ");
        }

        for (j = i; j <= n; j++){

            printf(" * ");
        }

        printf("\n");
    }
    
    return 1;
}