#include <stdio.h>
#include <string.h>

struct Emp
{
    int code;
    char name[100];
    int salary;

};


int main(){
    struct Emp e1[3];

    printf("Enter the data of the employees : \n\n");

    for(int i=0;i<3;i++){
        printf("Code of Employee %d : ",i+1);
        scanf("%d",&e1[i].code);
        printf("Name of Employee %d : ",i+1);
        scanf("%s",&e1[i].name);
        printf("Salary of Employee %d : ",i+1);
        scanf("%d",&e1[i].salary);
        printf("\n");
    }
    

    for(int i=0;i<3;i++){
        printf("Code of Employee %d : %d\n",i+1,e1[i].code);
        printf("Name of Employee %d : %s\n",i+1,&e1[i].name);
        printf("Salary of Employee %d : %d\n",i+1,e1[i].salary);
        printf("\n");
    }


    return 0;
}