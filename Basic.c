/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main()
{
    int n1,n2,sum,diff,prod,quot;
    printf("Enter number 1\n");
    scanf("%d", &n1);
    printf("Enter number 2\n");
    scanf("%d", &n2);
    sum=n1+n2;
    diff=n1-n2;
    prod=n1*n2;
    quot=n1/n2;
    printf("The sum is-%d \n", sum);
    printf("The difference is=%d \n", diff);
    printf("The product is-%d \n", prod);
    printf("The quotient is-%d \n", quot);
    return 0;
}