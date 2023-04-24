//Typedef is used to define a custom data type

#include <stdio.h>
#include <string.h>

typedef struct employee{
int code;
float salary;
char name[20];
} emp;

 
void show( emp e1){
    printf("Code : %d\n",e1.code);
    printf("Salary : %f\n",e1.salary);
    printf("Name : %s\n",e1.name);
}

int main(){
// Declaring el and ptr

emp e1;
emp *ptr;

// pointing ptr to e1

ptr = &e1;

// Set the member values for el

ptr->code = 101;
ptr->salary = 110.152;
strcpy(ptr->name,"Halua");

show(e1);

return 0;
}

