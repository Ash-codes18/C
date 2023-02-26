#include <stdio.h>

int main(){
    int r;
    printf("Enter your rating from the range 1-5 : ");
    scanf("%d",&r);
    switch (r)
    {
    case 1:
        printf("You have given the rating 1");
        break;
    case 2:
        printf("You have given the rating 2");
        break;
    case 3:
        printf("You have given the rating 3");
        break;
    case 4:
        printf("You have given the rating 4");
        break;
    case 5:
        printf("You have given the rating 5");
        break;
    default:
        printf("The given rating is out of range.");
        break;
    }
    return 0;
}