/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/
#include<stdio.h>
int main()
{
int a,b,c;
char ch;
printf("Enter num1\n");
scanf("%d", &a);
printf("Enter num2\n");
scanf("%d", &b);
printf("Enter choice\n");
scanf("%c", &ch);
switch(ch)
{
    case '+':
    c=a+b;
    printf("The result is-%d\n", c);
    break;
    case '-':
    c=a-b;
    printf("The result is-%d\n", c);
    break;
    case '%':
    if(b!=0)
    {
    c=a%b;
    printf("The result is-%d\n", c);
    }
    else
    {
        printf("NOT POSSIBLE");
    }
    break;
    case '/':
    if(b!=0)
    {
    c=a/b;
    printf("The result is-%d\n", c);
    }
    else
    {
        printf("NOT POSSIBLE");
    }
    break;
    default:
    printf("Invalid option");
    break;
}
    return 0;
}