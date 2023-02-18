//taking an array input through a function 

#include <stdio.h>

// Function Declartion
void input(int *ipt, int n);
void print(int *prt, int k);


// Main Function
int main(){
    int n;
    printf("Enter the no. of elements in the array : ");
    scanf("%d",&n);
    int array[n];
    input(array,n);
    printf("The array is : ");
    print(array,n);
    return 0;
}


// Function Logic

// Fucntion to take the elements of the array input
//Their are 2 ways to do so

//Method-1
void input(int *ipt, int n){
    for(int i=0;i<n;i++){
        printf("Enter element %d of the array : ",i+1);
        scanf("%d",ipt+i);
    }
}

//Method-2

/*
void input(int array[], int n){
    for(int i=0;i<n;i++){
        printf("Enter element %d of the array : ",i+1);
        scanf("%d",&array[i]);
    }
}
*/

// Fucntion to print the elements of the array 

// Method-1
/*
void print(int *prt, int k){
    for(int i=0;i<k;i++){
        printf("  %d",*(prt+i));
    }
}
*/

// Method-2
void print(int array[], int k){
    for(int i=0;i<k;i++){
        printf("  %d",(array[i]));
    }
}