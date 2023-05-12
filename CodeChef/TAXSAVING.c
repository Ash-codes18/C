#include <stdio.h>

int main(){
    int t,e,tax;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&e,&tax);
        if(e>tax){
            printf("%d\n",e-tax);
        }
    }
    
    return 0;
}