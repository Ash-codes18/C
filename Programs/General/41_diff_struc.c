//Another way to initialize structures

//Can also use this to initialize all the elements in the struct to 0 by writing it as ={0}

#include <stdio.h>

struct Emp
{
    int code;
    char name[100];
    int salary;

};

int main(){
    
     struct Emp e1={100,"Halua",12345};

     printf("Code : %d\n",e1.code);
    printf("Name : %s\n",e1.name);
    printf("Salary : %d",e1.salary);

    return 0;
}