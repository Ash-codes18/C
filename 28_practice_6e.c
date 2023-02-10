#include <stdio.h>

int main(){
    int i;
    printf("Enter the value of i : ");
    scanf("%d",&i);
    int *j=&i;
    int **k=&j;
    printf("Calling the value of i using pointer to pointer %d",**(k));
    
    return 0;
}