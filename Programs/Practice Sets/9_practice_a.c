#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
}vec;



int main(){
     
     vec v1;

     v1.x=3;
     v1.y=5;

     printf("X dimension : %d\nY dimension : %d",v1.x,v1.y);

    return 0;
}