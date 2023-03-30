#include <stdio.h>

int main(){
    int test_cases,a,b=0;
    scanf("%d",&test_cases);
    int arr[test_cases];
    while(test_cases--){
        scanf("%d",&a);
        if(a>=80){
            arr[b]=1;
            b++;
        }
        else{
            arr[b]=0;
            b++;
        }
    }
    
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        if(arr[i]==1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    
    return 0;
}