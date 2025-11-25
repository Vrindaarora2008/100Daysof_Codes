/*Q144: Write a function that accepts a structure as parameter and prints its members.
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92*/
#include <stdio.h>
enum Field 
{ 
    NAME, ROLL, MARKS 
};
struct Student 
{
    char name[30];
    int roll;
    int marks;
};
int main() 
{
    struct Student st;
    enum Field f;
    printf("Enter name\n");
    scanf("%s", st.name);
    printf("Enter roll\n");
    scanf("%d", &st.roll);
    printf("Enter marks\n");
    scanf("%d", &st.marks);
    f=NAME;
    if (f==NAME) 
    printf("Name-%s\n", st.name);
    f=ROLL;
    if (f==ROLL) 
    printf("Roll-%d\n", st.roll);
    f=MARKS;
    if (f==MARKS) 
    printf("Marks-%d\n", st.marks);
    return 0;
}