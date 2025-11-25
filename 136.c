/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30*/
#include<stdio.h>
enum CHOICES { ADD, SUBTRACT, MULTIPLY};
int main()
{
int choices,a,b;
enum CHOICES ch;
printf("Enter 0 for add, 1 for subtract and 2 for multiply\n");
scanf("%d", &choices);
printf("Enter numbers\n");
scanf("%d %d", &a, &b);
ch=choices;
switch(ch)
{
    case ADD:
    printf("ADD-%d", (a+b));
    break;
    case SUBTRACT:
    printf("SUBTRACT-%d", (a-b));
    break;//assuming a>b
    case MULTIPLY:
    printf("MULTIPLY-%d", (a*b));
    break;
}
    return 0;
}