#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum=0;
    //Complete the code to calculate the sum of the five digits on n.
    
    while(n>0){
        int div;
        div=n%10;
        sum=sum+div;
        n=n/10;
    }
    
    
    printf("%d",sum);
    return 0;
}