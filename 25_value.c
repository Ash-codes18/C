#include <stdio.h>
//   *()  is the value at operator, it gives the values present at a specific address
int main(){
    int j=5;
    int i;
    printf("%u\n%u\n%d",&j,_ADDRESSOF(j),*(&j));
    return 0;
}