#include <stdio.h>

int main(){
    int x,y;   
        scanf("%d %d",&x,&y);
        if(1<=y<=x && y<=x<=1000){
        printf("%d\n",x-y);      
        }
    
    
    return 0;
}