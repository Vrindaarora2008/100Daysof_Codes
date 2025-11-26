/*Q146: Create Employee structure with nested Date structure for joining date and print details.
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020*/
#include<stdio.h>
#include<stdlib.h>
struct date
{
    int day, month, year;
};
enum department { HR=1, SALES=2, FINANCE=3, IT=4};
struct employee
{
    char name[100];
    int id;
    float salary;
    enum department dept;
    struct date join;
};
int main()
{
    struct employee e;
    printf("Enter Name\n");
    fgets(e.name,sizeof(e.name),stdin);
    printf("Enter ID\n");
    scanf("%d",&e.id);
    printf("Enter Salary\n");
    scanf("%f",&e.salary);
    printf("Enter Department:\n1.HR\n2.Sales\n3.Finance\n4.IT\n");
    scanf("%d",&e.dept);
    printf("Enter Joining date\n");
    scanf("%d %d %d",&e.join.day,&e.join.month,&e.join.year);
    printf("EMPLOYEE DETAILS:\nName: %s\nID: %d\nSalary: %f\nDepartment:\n",e.name,e.id,e.salary);
    switch (e.dept)
    {
        case HR:
        printf("HR");
        break;
        case SALES:
        printf("Sales");
        break;
        case FINANCE:
        printf("Finance");
        break;
        case IT:
        printf("IT");
        break;
        default:
        printf("Invalid.");
        break;
    }
    printf("Joining date: %d-%d-%d\n",e.join.day,e.join.month,e.join.year);
}