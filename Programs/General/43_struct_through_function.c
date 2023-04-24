#include <stdio.h>

struct Emp
{
    int code;
    char name[100];
    int salary;

};


void strucall(struct Emp e){

    printf("Code : %d\n",e.code);
    printf("Salary : %d",e.salary);
}

int main(){
    
     struct Emp e1;

     struct Emp *ptr;
     ptr=&e1;

     (*ptr).code=101;

     ptr->salary=25000;  // We can use arrow operator instead of (*ptr).field 


    strucall(e1);

    return 0;
}