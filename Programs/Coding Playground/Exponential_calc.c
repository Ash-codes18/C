    #include <stdio.h>
    #include <math.h>
    int fun(int a,int b);

    int main(){
        int x,y;
        int val;
        printf("Enter a number : ");
        scanf("%d",&x);
        printf("Enter the power: ");
        scanf("%d",&y);
        printf("The value of %d to the power %d is : ",x,y);
        val = fun(x,y);
        return 0;
    }
    int fun(int a,int b){
        int f;
        f = pow(a,b);
        printf("%d",f);
    }