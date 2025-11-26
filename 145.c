/*Q145: Return a structure containing top student's details from a function.
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96*/
#include <stdio.h>
enum Field { NAME, ROLL, MARKS };   
struct Student 
{
    char name[20];
    int roll;
    int marks;
};
struct Student Top(struct Student s[], int n) 
{
    int t=0;
    for (int i=1;i<n;i++) 
    {
        if (s[i].marks > s[t].marks) 
        {
            t=i;
        }
    }
    return s[t]; 
}
int main() 
{
    int n = 3,i;
    struct Student s[3];
    printf("Enter details of 3 students\n");
    for (int i=0;i<n;i++) 
    {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }
    struct Student ts=Top(s, n);
    printf("Top Student-%s\tRoll-%d\tMarks-%d\n",ts.name, ts.roll, ts.marks);
    return 0;
}
