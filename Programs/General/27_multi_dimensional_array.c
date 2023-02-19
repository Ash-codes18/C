#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the no. of Students : ");
    scanf("%d",&a);
    printf("Enter the no. of Subjects : ");
    scanf("%d",&b);
    int array[a][b];
    
    //Loop to take values input in the array
    for(int i =0; i<a; i++){
        for(int j=0; j<b;j++){
            printf("Enter the marks of Student %d in Subject %d : ",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }

    //Loop to print the values of the array
    for(int i =0; i<a; i++){
        for(int j=0; j<b;j++){
            printf("The marks of Student %d in Subject %d is : %d\n",i+1,j+1,array[i][j]);
        }
    }

    return 0;
}