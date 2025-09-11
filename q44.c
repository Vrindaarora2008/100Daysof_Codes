/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4
*/
#include<stdio.h>
int main()
{
float n;
printf("Enter the value\n");
scanf("%f", &n);
float sum=0.0;
for(float i=1.0;i<=n;i++)
{
    sum=sum+((2*i)/2*i-1);
}
printf("The sum is-%f\n", sum);
    return 0;
}