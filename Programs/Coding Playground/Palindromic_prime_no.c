#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x;
    scanf("%d",&x);
    int z=x;
    int zz=x;
    

    //Palindrome
    
    int a,b=0;
    while(z>0){
        a=z%10;
        b=(b*10)+a;
        z=z/10;
    }


    //Prime

    int p=0;
    int i=2;
    if(zz>1){
    for(i;i<zz;i++){
        if(zz%i==0){
            p=1;
            break;
        }
    }
    }


    //Final
        
    if(x==b && p==0){
        printf("YES");
    }
        else{
            printf("NO");
        }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
