#include <stdio.h>

int main(){
    int test_cases,a,c=0;
    scanf("%d",&test_cases);
    int arr[test_cases];
    while(test_cases--){
        scanf("%d",&a);
        if(a>20){
            arr[c]=1; 
            c++;
        }
        else{
            arr[c]=0;
            c++;
        }

    }
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        if(arr[i]==1){
            printf("HOT\n");
        }
        else{
            printf("COLD\n");
        }
    }
    
    return 0;
}