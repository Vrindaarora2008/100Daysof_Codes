#include <stdio.h>
enum Field { NAME, ROLL, MARKS };
struct Student 
{
    char name[50];
    int roll;
    int marks;
};
void modify(struct Student *ptr, enum Field field) 
{
    if (field==NAME) 
    {
        printf("Enter Name\n");
        scanf("%s", ptr->name);
    }
    else if (field==ROLL) 
    {
        printf("Enter Roll Number\n");
        scanf("%d", &ptr->roll);
    }
    else if (field==MARKS) 
    {
        printf("Enter Marks\n");
        scanf("%d", &ptr->marks);
    }
}
int main() 
{
    struct Student s;
    struct Student *ptr = &s;
    modify(ptr, NAME);
    modify(ptr, ROLL);
    modify(ptr, MARKS);
    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);
    return 0;
}
