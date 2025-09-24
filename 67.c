/*Q67: Insert an element in an array at a given position.
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40*/
#include<stdio.h>
int main()
{
    int n,element,pos;
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
printf("\nEnter new element and position\n");
scanf("%d %d", &element, &pos);
for(int a=n;a>pos;a--)
{
    arr[a]=arr[a-1];
}
arr[pos]=element;
printf("The array is-\n");
for(int i=0;i<n;i++)
{
printf("%d", arr[i]);
printf(" ");
}
return 0;
}