/*Q30: Write a program to reverse a given number.
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/
#include<stdio.h>
int main()
{
int num,rem,reverse=0;
printf("Enter the number\n");
scanf("%d", &num);
while(num!=0)
{
    rem=num%10;
    reverse=(reverse*10)+rem;
    num=num/10;
}
printf("The reverse of the number is-%d", reverse);
    return 0;
}