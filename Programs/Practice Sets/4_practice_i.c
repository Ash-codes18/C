//Program to find if a no. is prime or not using for loop
#include <stdio.h>

int main()
{
int a;
    int cn = 0;
    printf("Enter a no. : ");
    scanf("%d", &a);
    if (a>1){    
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            cn = 1;
            break;
        }
    }
    if (cn == 1)
    {
        printf("%d is not a prime no.", a);
    }
    else
    {
        printf("%d is a prime no.", a);
    }
    }
    else{
        printf("%d is not a prime no.", a);
    }
    return 0;
}