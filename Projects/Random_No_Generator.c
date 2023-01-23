#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num;
    srand(time(0));
    num=rand()%100 +1; //Generates a no. b/w 1-100
    printf("The number is : %d \n",num);
    return 0;
}