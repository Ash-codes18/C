#include <stdio.h>

void savg(int *a,int *b);

void svg(int a,int b,int *sum,int *avg);

int main(){
    int a,b,sum,avg;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Calling the function : ");
    savg(&a,&b);
    svg(a,b,&sum,&avg);
    printf("Returning 2 values through 1 function -:\nSum = %d\nAvg = %d",sum,avg);
    return 0;
}

void savg(int *a,int *b){
    int z = *a+*b;
    printf("The sum is : %d\n",z);
    int zz = (*a + *b)/2;
    printf("The average is : %d\n",zz);



}

void svg(int z,int zz,int *sum,int *avg){
    *sum=z +zz;
    *avg=*sum/2;

}