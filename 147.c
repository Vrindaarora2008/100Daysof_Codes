/*Q147: Store employee data in a binary file using fwrite() and read using fread().
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.*/
#include <stdio.h>
enum Department { HR=1, FINANCE=2, TECH=3, SALES=4 };
struct Employee 
{
    int id;
    char name[50];
    float salary;
    enum Department dept;
};
int main() 
{
    struct Employee emp, empRead;
    printf("Enter Employee ID\n");
    scanf("%d", &emp.id);
    printf("Enter Employee Name\n");
    scanf("%s", emp.name);
    printf("Enter Salary\n");
    scanf("%f", &emp.salary);
    printf("Choose Department\n");
    scanf("%d", (int*)&emp.dept); 
    FILE *fp=fopen("employee.bin", "wb");
    if (fp==NULL) 
    {
        printf("File not found!\n");
        return 1;
    }
    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);
    printf("Employee details stored successfully.n");
    fp = fopen("employee.bin", "rb");
    fread(&empRead, sizeof(empRead), 1, fp);
    fclose(fp);
    printf("Employee Data\n");
    printf("ID-%d\n", empRead.id);
    printf("Name-%s\n", empRead.name);
    printf("Salary-%f\n", empRead.salary);
    printf("Department\n");
    switch (empRead.dept) 
    {
        case HR: 
        printf("HR\n"); 
        break;
        case FINANCE: 
        printf("Finance\n"); 
        break;
        case TECH: 
        printf("Tech\n"); 
        break;
        case SALES: 
        printf("Sales\n"); 
        break;
        default: 
        printf("Unknown\n");
    }
    return 0;
}
