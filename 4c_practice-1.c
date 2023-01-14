#include <stdio.h>

int main(){
    float pi = 3.14;
    int r,h;
    printf("Enter the radius of the cylinder : ");
    scanf("%d",&r);
    printf("Enter the height of the cylinder : ");
    scanf("%d",&h);
    printf("The volume of the given cylinder is : %f", pi*r*r*h);

    return 0;
}