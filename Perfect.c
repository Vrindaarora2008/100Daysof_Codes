/*Q42: Write a program to check if a number is a perfect number.
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number
*/
#include<stdio.h>
int main()
{
int n, temp=0,sum=0,rem;
printf("Enter a number\n");
scanf("%d", &n);
temp=n;
while(n!=0)
{
rem=n%10;
sum=(sum*10)+rem;
n=n/10;
}
if(temp==sum)
{
    printf("PERFECT NUMBER");
}
else
{
    printf("NOT A PERFECT NUMBER");
}
    return 0;
}