/*Q24: Write a program to calculate an electricity bill based on units consumed.
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200
*/
#include<stdio.h>
int main()
{
int N,bill;
printf("Enter the no. of watts\n");
scanf("%d", &N);
if(N<=50)
{
    bill=N*5;
    printf("The bill is-%d", bill);
}
else if(N>50 && N<=150)
{
    bill=(N*5)+200;
    printf("The bill is-%d", bill);
}
else if(N>150 && N<=300)
{
    bill=(N*5);
    printf("The bill is-%d", bill);
}
else
{
    bill=N*10;
    printf("The bill is-%d", bill);
}
    return 0;
}