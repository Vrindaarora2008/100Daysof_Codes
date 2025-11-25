/*Q143: Find and print the student with the highest marks.
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)*/
#include <stdio.h>
struct Student 
{
    char name[30];
    int roll;
    int marks;
};
int main() 
{
    struct Student s[100];
    int n;
    printf("Enter number of students\n");
    scanf("%d", &n);
    for (int i=0;i<n;i++) 
    {
        printf("Enter details of student-%d\n", i + 1);
        printf("Name\n");
        scanf("%s", s[i].name);
        printf("Roll\n");
        scanf("%d", &s[i].roll);
        printf("Marks\n");
        scanf("%d", &s[i].marks);
    }
    int max=0;
    for (int i=1;i<n;i++) 
    {
        if (s[i].marks > s[max].marks) 
        {
            max=i;
        }
    }
    printf("\nTopper-%s (Marks-%d)\n", s[max].name, s[max].marks);
    return 0;
}

