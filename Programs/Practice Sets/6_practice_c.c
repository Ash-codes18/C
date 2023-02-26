//Changing the value inside main through a function by calling it through reference
    #include <stdio.h>
    
    int ten(int*a);
    void tenv(int*a);

    int main(){
        int a;
        printf("Enter a number : ");
        scanf("%d",&a);
        int b=ten(&a);
        printf("The value of %d after calling the function is %d\n",a,b);
        printf("The value of %d after calling the void function is ",a);
        tenv(&a);
        return 0;
    }

    int ten(int *a){
        int temp;
        temp = (*a)*10; 
        return temp;
    }
    
    void tenv(int *a){
        printf("%d",(*a)*10);
    }