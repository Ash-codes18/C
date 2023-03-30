#include <stdio.h>

int main(){
    int test_cases;
    scanf("%d",&test_cases);
    int j,t,arr[test_cases],c=0;
    while (test_cases--)
    {
        scanf("%d %d",&j,&t);
        if(j<t){
            arr[c]=0;
            c++;
        }
        else{
            arr[c]=1;
            c++;
        }
    }
    
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        if(arr[i]==0){
            printf("Yes\n"); 
        }
        else{
            printf("No\n");
        }
    }
    
    return 0;
}