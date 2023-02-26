#include <stdio.h>

int main(){
    for (int i=0,j=0,k = 0; i<5,j<6,k<7; i++)
    {
        printf("%d, %d, %d\n",i,j,k);
        j+=2;
        k+=3;
    }
       
    return 0;
}