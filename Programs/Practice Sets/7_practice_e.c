#include <stdio.h>

void input(int *ptr, int n);
void checker(int *ptr, int n);

int main(){
    int a;
    printf("Enter the no. of elements in the array : ");
    scanf("%d",&a);
    int arr[a];
    input(arr,a);
    checker(arr,a);
    return 0;
}

void input(int *ptr, int n){
    for(int i=0;i<n;i++){
        printf("Enter the value of Element %d : ",i+1);
        scanf("%d",ptr+i);
    }
}


void checker(int *ptr, int n){
    int count =0;
        while(n>0){
        if((*ptr)>0){
        count+=1;
        }
        ptr++;
        n--;
    }
    printf("%d",count);
}