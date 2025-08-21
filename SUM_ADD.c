/*
Q1: Write a program to input two numbers and display their sum.
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19
*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter value of number 1\n");
    scanf("%d", &num1);
    printf("Enter value of number 2\n");
    scanf("%d", &num2);
    int sum = num1+num2;
    printf("The sum of the numbers is-%d", sum);
    return 0;
}