#include <stdio.h>

int main(){

    int a,b,c;
    printf("Enter the Dimensions of the array : \n");
    printf("Dimension 1 : ");
    scanf("%d",&a);
    printf("Dimension 2 : ");
    scanf("%d",&b);
    printf("Dimension 3 : ");
    scanf("%d",&c);
    
    int arr[a][b][c];

    for(int i=0;i<a;i++){

        for(int j=0;j<b;j++){

            for(int k=0;k<c;k++){   

                printf("The address of arr[%d][%d][%d] is : %u\n",i,j,k,&arr[i][j][k]);
    }   
    }
    }
    return 0;
}