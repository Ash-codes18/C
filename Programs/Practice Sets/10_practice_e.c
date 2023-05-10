#include <stdio.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    ptr=fopen("10_a.txt","r");
    ptr1=fopen("10_e.txt","w+");

    int c;
    while (fscanf(ptr,"%d",&c)!=EOF)
    {
        fprintf(ptr1,"%d\n",c*2);
    }
    
    fclose(ptr);
    fclose(ptr1);

    printf("The program has been sucessfully executed.");

    return 0;
}