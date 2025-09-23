/*Q69: Find the second largest element in an array.
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40*/
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
printf("The array is-\n");
for(int a=0;a<n;a++)
{
    printf("%d", arr[a]);
    printf(" ");
}
int max=arr[0], sec=arr[1];
for(int i=0;i<n;i++)
{
    if(arr[i]>max)
    {
        sec=max;
        max=arr[i];
    }
    else
    {
        sec=arr[i];
    }
}
printf("Second maximum no. is-%d", sec);
return 0;
}