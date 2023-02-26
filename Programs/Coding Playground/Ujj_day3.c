#include <stdio.h>

int main(){
    int n;
    printf("Enter the no. of elements in the array : ");
    scanf("%d",&n);
    int array[n];
    int *ptr= &array[0];
    for(int i=0;i<n;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0;i<n;i++){

        for(int k=1;k<n-i;k++){
            if(array[k]<array[k-1]){
                int temp=array[k];
                array[k]=array[k-1];
                array[k-1]=temp;
            }
        }
    }
    printf("The elements of the array in ascending order are as follows: \n");
    for(int i=0;i<n;i++){
        printf("Element %d is : %d\n",i+1,array[i]);
    }

    return 0;
}