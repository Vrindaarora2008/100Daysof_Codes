/*Q39: Write a program to find the product of odd digits of a number.
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)*/
#include<stdio.h>
int main()
{
int num,rem,prod=1;
printf("Enter a number\n");
scanf("%d", &num);
while(num>0)
{
    rem=num%10;
    num=num/10;
    if(rem%2!=0)
    {
        prod=prod*rem;
    }
    else
    {
        prod=1*prod;
    }
}
printf("The product of odd digits is-%d", prod);
    return 0;
    }