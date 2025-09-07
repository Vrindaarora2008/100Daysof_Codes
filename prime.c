#include<stdio.h>
int main()
{
int n,temp;
printf("Enter number\n");
scanf("%d", &n);
temp=n;
for(int i=1;i<=n-1;i++)
if(temp%i==0)
{
    printf("It is not prime");
    break;
}
else
{
    printf("It is prime");
}
    return 0;
}