#include <stdio.h>

int main(){
    int z;
    printf("Enter the no. for which the multiple is to be calculated : ");
    scanf("%d",&z);
    int a;
    printf("Enter the last multiple of %d you want to have : ",z);
    scanf("%d",&a);
    int mul[a];
    for (int i=0;i<a;i++){
        mul[i]=z*(i+1);
        printf("%d times %d = %d\n",z,i+1,mul[i]);
    }
    return 0;
}