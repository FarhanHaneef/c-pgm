#include<stdio.h>
struct employee
{
    char name[20];
    int id;
    int salary;
};
void main()
{
    struct employee e;
    printf("name:");
    scanf("%s",&e.name);
    printf("\nEmployee id:");
    scanf("%d",&e.id);
    printf("\nsalary:");
    scanf("%d",&e.salary);
    printf("\n the entered details\n");
    printf("name:%s\t",e.name);
    printf("Employee id:%d\t",e.id);
    printf("salary:%d\t",e.salary);
}
