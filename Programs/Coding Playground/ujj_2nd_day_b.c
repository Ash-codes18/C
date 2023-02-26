#include <stdio.h>

int main(){
    int n;
    printf("Enter the upper range : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int prime=1;
        for(int j=1;j<i/2;j++){
            if(i%j!=0){
                prime=1;
                break;
            }
            else{
                prime=0;
            }

        }
         if(prime){
        printf("%d\n",i);
    }
    else{
        printf("No prime nos. found in the given range");
        break;
    }
    }
   
    return 0;
}