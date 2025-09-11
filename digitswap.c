/*Q41: Write a program to swap the first and last digit of a number.
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001*/
#include<stdio.h>
int main()
{
int number,rem,f,divisor=1,result,temp;
printf("Enter the number\n");
scanf("%d", &number);
temp=number;
rem=number%10;
while(temp>=10)
{
    temp=temp/10;
    divisor*=10;
}
f=temp;
int middle=(number%divisor)/10;
result=(rem*divisor)+middle*10+f;
printf("%d",result);
    return 0;
}