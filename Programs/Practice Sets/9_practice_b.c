#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
}vec;


vec vector_sum(vec a,vec b){
    vec result;

    result.x=a.x+b.x;
    result.y=a.y+b.y;

    printf("The Sum of Vectors is : %d + %d",result.x,result.y);

}


int main(){
     
     vec v1,v2,sum;

     v1.x=3;
     v1.y=5;

     v2.x=17;
     v2.y=34;

     printf("For Vector 1 - X dimension : %d;\tY dimension : %d\n",v1.x,v1.y);
     printf("For Vector 2 - X dimension : %d;\tY dimension : %d\n",v2.x,v2.y);

     sum = vector_sum(v1,v2);

    return 0;
}