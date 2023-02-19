#include <stdio.h>

int main(){
    int a=0;
    while (a<20){
        a++;
        if (a>=10 && a<=20){
            printf("The value of a is : %d\n",a);
        }
    }
    return 0;
}