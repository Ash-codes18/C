#include <stdio.h>

int main(){
    int t,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&d);
        if(d>=2000){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}