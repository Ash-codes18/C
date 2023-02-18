#include <stdio.h>

int main(){
    int p,r,t;
    printf("Enter the Principal Amount : ");
    scanf("%d",&p);
    printf("Enter the Rate of Interest : ");
    scanf("%d",&r);
    printf("Enter the Time Interval (in yrs.) : ");
    scanf("%d",&t);
    printf("The Simple Interest gained is : %d",(p*r*t)/100);

    return 0;
}