/*Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90*/
#include <stdio.h>
struct Student 
{
    char name[100];
    int roll;
    int marks;
};
int main() 
{
    struct Student s;
    printf("Enter name\n");
    scanf("%s", s.name);
    printf("Enter roll number\n");
    scanf("%d", &s.roll);
    printf("Enter marks\n");
    scanf("%d", &s.marks);
    printf("Name-%s\n Roll-%d\n Marks-%d\n", s.name, s.roll_no, s.marks);
    return 0;
}
