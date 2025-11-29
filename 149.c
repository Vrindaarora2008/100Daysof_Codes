/*Q149: Use malloc() to allocate structure memory dynamically and print details.
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88*/
#include <stdio.h>
#include <stdlib.h>
enum Status { ACTIVE, INACTIVE }; 
struct Student {
    char name[50];
    int roll;
    int marks;
    enum Status status;              
};
int main() 
{
    struct Student *s=(struct Student*) malloc(sizeof(struct Student));
    if (s==NULL) 
    {
        printf("Memory allocation failed!");
        return 1;
    }
    printf("Enter name\n");
    scanf("%s", s->name);
    printf("Enter roll number\n");
    scanf("%d", &s->roll);
    printf("Enter marks\n");
    scanf("%d", &s->marks);
    s->status=ACTIVE;  
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);
    free(s); 
    return 0;
}
