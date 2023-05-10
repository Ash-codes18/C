#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *ptr;
    ptr=fopen("10_b.txt","w+");

    int a,b;
    printf("Enter the no. you want the table of : ");
    scanf("%d",&a);
    printf("Enter till where you want the table to be generated : ");
    scanf("%d",&b);
    

    for (int i = 0; i < b; i++)
    {
        fprintf(ptr,"%d x %d = %d\n",a,i+1,a*(i+1));
    }
    fclose(ptr);
    printf("Table of %d till %d has been generated in 10_b.txt",a,b);
    system('pause');
    return 0;
}