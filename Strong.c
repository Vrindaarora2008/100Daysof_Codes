/*Q43: Write a program to check if a number is a strong number.
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number*/
#include <stdio.h>
int main() 
{
    int num, temp, digit, sum = 0, fact;
    printf("Enter a number\n");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) 
    {
        digit = temp % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++)
         {
            fact=fact* i;
        }
        printf("%d\n", fact);
        sum += fact;
        temp /= 10;
    }
    if (sum == num)
    {
        printf("Strong Number\n");
    }
    else
    {
        printf("Not a Strong Number");
    }
        return 0;
}
