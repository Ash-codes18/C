#include <stdio.h>

int main(){
    int a,b=0;
    int z=1;
    printf("Enter the no. of steps you want to increase the power of 2 : ");
    scanf("%d",&a);
    int c=0;
    int d=1;
    int i=0;
        printf("%d\n",c);
        printf("%d\n",d);
for(i;i<a;i++){
    b=z;
    z=z+b;
    printf("%d\n",z);
}
    return 0;
}