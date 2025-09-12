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
    printf("It is prime");
    break;
}
else
{
    printf("It is not prime");
}
    return 0;
}