/*Q59: Count even and odd numbers in an array.
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0*/
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
int odd=0,even=0;
for(int i=0;i<n;i++)
{
    if(arr[i]%2==0)
    {
        even++;
    }
    if(arr[i]%2!=0)
    {
        odd++;
    }
}
printf("Count of even digits=%d\n", even);
printf("Count of odd digits is-%d\n", odd);
return 0;
}