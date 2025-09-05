/*Q32: Write a program to check if a number is a palindrome.
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/
#include<stdio.h>
int main()
{
int num,rem,temp=0,sum=0;
printf("Enter a number\n");
scanf("%d", &num);
temp=num;
while(num>0)
{
    rem=num%10;
    sum=(sum*10)+rem;
    num=num/10;
}
if(temp==sum)
{
    printf("PALINDROME\n");
}
else
{
    printf("NOT PALINDROME\n");
}
    return 0;
}