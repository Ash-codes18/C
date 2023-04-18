#include <stdio.h>
#include <string.h>

struct Emp
{
    int code;
    char name[100];
    int salary;

};

int main(){
    struct Emp e1;

    e1.code=101;
    strcpy(e1.name,"Ash");
    e1.salary=1010;

    printf("Code : %d\n",e1.code);
    printf("Name : %s\n",e1.name);
    printf("Salary : %d",e1.salary);

    return 0;
}