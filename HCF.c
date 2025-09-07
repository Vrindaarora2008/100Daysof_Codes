/*Q36: Write a program to find the HCF (GCD) of two numbers.
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1*/
#include<stdio.h>
int main()
{
int a,b,n;
printf("Enter no.1\n");
scanf("%d", &a);
printf("Enter no.2\n");
scanf("%d", &b);
while(b!=0)
{
    n=b;
    b=a%b;
    a=n;
}
printf("The HCF is-%d",a);
    return 0;
}