#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("10_a.txt","r+");
    int a,b,c;
    
    fscanf(ptr,"%d",&a);
    fscanf(ptr,"%d",&b);
    fscanf(ptr,"%d",&c);

printf("The 3 integers present in the file are as follows : \n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d",c);
    return 0;
}