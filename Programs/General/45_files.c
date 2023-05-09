#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    int num1;
    ptr = fopen("46.txt","r+"); 
    if(ptr==NULL){
        printf("The file does not exist\n");
    }
    else{
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num1);

    fclose(ptr);

    printf("%d\n",num);
    printf("%d",num1);
    
}
    return 0;
}