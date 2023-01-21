//Program to print first n natural nos. using do while loop
#include <stdio.h>

int main(){
    int a;
    int s=0;
    printf("Enter the upper limit : ");
    scanf("%d",&a);
    do{
        printf("%d\n",s+1);
        s++;
    }while(s<a);
    return 0 ;
}