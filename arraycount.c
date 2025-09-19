/*Q60: Count positive, negative, and zero elements in an array.
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1*/
#include<stdio.h>
int main()
{
int n;
printf("Enter the size of the array\n");
scanf("%d", &n);
int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d", &arr[i]);
}
for(int i=0;i<n;i++)
{
    printf("%d", arr[i]);
    printf(" ");
}
int pos=0,neg=0,zero=0;
for(int i=0;i<n;i++)
{
    if(arr[i]==0)
    {
        zero++;
    }
    if(arr[i]>0)
    {
        pos++;
    }
    if(arr[i]<0)
    {
        neg++;
    }
}
printf("Count of positive digits=%d\n", pos);
printf("Count of negative digits is-%d\n", neg);
printf("Count of zero is-%d", zero);
return 0;
}