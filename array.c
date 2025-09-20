/*Q62: Reverse an array without taking extra space.
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
for(int a=0;a<n;a++)
{
    scanf("%d", &arr[a]);
}
printf("Array in reverse is-");
for(int i=n-1;i>=0;i--)
{
printf("%d", arr[i]);
printf(" ");
}
    return 0;
}