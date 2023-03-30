#include <stdio.h>

int main(){
    int test_cases;
    scanf("%d",&test_cases);
    int a,b,c=0;
    int arr[test_cases];
    while(test_cases--){
        scanf("%d %d",&a,&b);
        if(a+b>6){
            arr[c]=1;
            c++;
        }
        else{
            arr[c]=0;
            c++;
        }
    }

    for(int i=0;i<sizeof(arr)/4;i++){
        if(arr[i]==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}