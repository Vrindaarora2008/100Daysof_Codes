/*Q148: Take two structs as input and check if they are identical.
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same*/
#include<stdio.h>
#include<string.h>
struct Student
{
    char name[100];
    int marks, roll;
};
enum Status { Same, Not};
enum Status comparing(struct Student s1, struct Student s2)
{
    if(strcmp(s1.name, s2.name)==0 && s1.roll==s2.roll && s1.marks==s2.marks)
    {
        return Same;
    }
    else
    {
        return Not;
    }
}
int main()
{
    struct Student s1, s2;
    printf("Enter details of Student 1\n");
    scanf("%s %d %d",s1.name, &s1.roll, &s1.marks);
    printf("Enter details of Student 2\n");
    scanf("%s %d %d",s2.name, &s2.roll, &s2.marks);
    enum Status result=comapre(s1, s2);
    if(result==Same)
    printf("SAME!");
    else
    printf("NOT");
    return 0;
}