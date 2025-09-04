#include<stdio.h>
int main()
{
int a,fact=1;
printf("Enter a number\n");
scanf("%d", &a);
int i=1;
while(i<=a)
{
    fact=fact*i;
    i++;
}
printf("The factorial is-%d", fact);
    return 0;
}