#include <stdio.h>

int main(){
    int a;
    printf("Menu : \n");
    printf("1. Marks in the slab 90-100\n");
    printf("2. Marks in the slab 80-90\n");
    printf("3. Marks in the slab 70-80\n");
    printf("4. Marks in the slab 60-70\n");
    printf("5. Marks in the slab 50-60\n");
    printf("6. Marks below 50\n");
    printf("Choose the option : ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Your grade is A");
        break;
    case 2:
        printf("Your grade is B");
        break;
    case 3:
        printf("Your grade is C");
        break;
    case 4:
        printf("Your grade is D");
        break;
    case 5:
        printf("Your grade is E");
        break;
    default:
        printf("Sorry, Your have not qualified");
        break;
    }
    return 0;
}


