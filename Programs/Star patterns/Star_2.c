#include <stdio.h>

int main(){
    
    int n;
    printf("Enter the no. of the rows in the pattern : ");
    scanf("%d", &n);
    int y=n;

    for (int i = 0; i < n; i++)
    {
        for (int j = y; 0<j; j--)
        {
            printf(" *");
        }
        y--;
        printf("\n");
    }
    

    return 0;
}