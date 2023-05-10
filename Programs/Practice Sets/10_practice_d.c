#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("10_d.txt","w");

    int e_num,salary;
    char name[10];
    printf("Enter the no. of Employees : ");
    scanf("%d",&e_num);

    for (int i = 0; i < e_num; i++)
    {
        printf("Enter the Name of Employee %d : ",i+1);
        scanf("%s",&name);
        fprintf(ptr,"%d. %s",i+1,name);
        printf("Enter the Salary of Employee %d : ",i+1);
        scanf("%d",&salary);
        fprintf(ptr,", %d\n",salary);
    }
    fclose(ptr);
    printf("The records of the name and salary of the employees has been generated in 10_d.txt");

    return 0;
}