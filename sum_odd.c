/*Q27: Write a program to print the sum of the first n odd numbers.
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25
*/
#include<stdio.h>
int main()
{
int n,sum=0,odd;
printf("Enter a num\n");
scanf("%d", &n);
for(int i=1;i<=n;i++)
{
        odd=(2*i)-1;
        printf("The odd numbers are-%d\n", odd);
sum=sum+odd;
printf("The sum is-%d\n", sum);
}
    return 0;
}