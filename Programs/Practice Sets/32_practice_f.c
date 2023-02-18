#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the number of nos. you want to calculate the multiple of : ");
    scanf("%d",&a);
    printf("Enter the place till which you want to calculate the multiple : ");
    scanf("%d",&b);
    int arr[a][b];
    // for(int i=0;i<a;i++){
    //     for(int k=0;k<b;k++){
    //         printf("%d times %d = %d\n",i+1,k+1,a*(k+1));
    //     }
    // }
    return 0;
}