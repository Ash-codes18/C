#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num,n;
    int low=0 , high =0;
    srand(time(0));
    num=rand()%100 +1; //Generates a no. b/w 1-100
    printf("                                    Welcome to the no. guessing game!\n");
    printf("");
    printf("A Random no. b/w 1-100 is being generated.....\n");
    system("pause");
    // printf("The number is : %d ",num);
    do{
        printf("Guess the no. : ");
        scanf("%d",&n);
        if(n>num){
            printf("Lower number please\n");
            low = low+1;

        }
        else if (n<num){
            printf("Higher number please\n");
            high=high+1;
        }
        else{
            printf("Congratulations! You have guessed the no. correctly!\n");
        break;
        }
    }while(n!=num);
    printf("Your score is : %d\n",99-(low+high));
    return 0;
}