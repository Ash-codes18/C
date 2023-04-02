#include <stdio.h>

int main(){
    int test_cases;
    scanf("%d",&test_cases);
    int c1,c2,arr[test_cases],c=0;
    while (test_cases--)
    {
        scanf("%d %d",&c1,&c2);
        if(c1<c2){
            arr[c]=1;
            c++;
        }
        else if(c1==c2){
            arr[c]=0;
            c++;
        }
        else{
            arr[c]=2;
            c++;
        }
    }
    
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        if(arr[i]==0){
            printf("ANY\n"); 
        }
        else if(arr[i]==1){
            printf("FIRST\n");
        }
        else{
            printf("SECOND\n");
        }
    }
    
    return 0;
}