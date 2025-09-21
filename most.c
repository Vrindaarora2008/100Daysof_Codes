/*Q64: Find the digit that occurs the most times in an integer number.
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7*/
#include<stdio.h>
int main()
{
    int n,dig,temp,digit,count=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    temp=n;
    while(n!=0)
    {
        dig=n%10;
        n=n/10;
        count++;
    }
    int array[count];
    for(int i=0;i<count;i++)
    {
        digit=temp%10;
        temp=temp/10;
        array[i]=digit;
    }
    printf("The array is-\n");
    for(int i=count-1;i>=0;i--)
    {
       printf("%d", array[i]);
       printf(" ");
    }
int number[10]={0};
for(int i=0;i<count;i++)
{
    number[array[i]]++; 
}
int max=0;
for(int i=1;i<10;i++)
{
    if(number[i]>number[max])
    {
        max = i;
    }
}
printf("Most times %d appears", max);
return 0;
}