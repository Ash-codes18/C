#include <stdio.h>

int main(){
    int n;
    int c=0;
    printf("Enter the value for which you want to check the Conjecture :");
    scanf("%d",&n);
    do{
    if (n%2==0){
        printf("%d\n",n/2);
        n=n/2;
        c++;
    }
    else{
        printf("%d\n",3*n+1);
        c++;
        n=3*n+1;
    }
}while(n!=1);
printf("No. of steps taken to reach the conjecture : %d",c);
    return 0;
}