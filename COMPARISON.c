/*Q16: Write a program to input three numbers and find the largest among them using if–else.
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0
*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("ENTER NUMBER 1\n");
scanf("%d", &a);
printf("ENTER NUMBER 2\n");
scanf("%d", &b);
printf("ENTER NUMBER 3\n");
scanf("%d", &c);
if(a>b && a>c)
{
    printf("A IS GREATER");
}
else if(b>a && b>c)
{
    printf("B IS GREATER");
}
else
{
    printf("C IS GREATER");
}
    return 0;
}