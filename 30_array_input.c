//Taking marks of 10 students input in an array by using for loop

#include <stdio.h>

int main(){
    int marks[10];

    for (int i=0;i<10;i++){

        printf("Enter the marks of Student %d : ",i+1);
        scanf("%d",&marks[i]);

    }
    
    for (int i=0;i<10;i++){

        printf("\n");
        printf("The marks of Student %d is : %d",i,marks[i]);

    }
    return 0;
}