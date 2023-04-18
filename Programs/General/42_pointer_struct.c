#include <stdio.h>

struct Emp
{
    int code;
    char name[100];
    int salary;

};

int main(){
    
     struct Emp e1;

     struct Emp *ptr;
     ptr=&e1;

     (*ptr).code=101;
     printf("Code : %d\n",e1.code);

     ptr->salary=25000;  // We can use arrow operator instead of (*ptr).field 
     printf("Salary : %d",e1.salary);

     


    return 0;
}