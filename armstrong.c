#include<stdio.h>
int main()
{
int n,sum=0,cube=1,r,temp;
printf("Enter a number\n");
scanf("%d", &n);
temp=n;
while(n>0)
{
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
    cube=cube+(r*r*r);
}
if(temp==cube)
{
    printf("ARMSTRONG");
}
else
{
    printf("NOT ARMSTRONG");
}
    return 0;
}