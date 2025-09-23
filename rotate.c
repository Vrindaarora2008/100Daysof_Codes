/*Q70: Rotate an array to the right by k positions.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3*/
#include<stdio.h>
int main()
{
    int n,k;
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
printf("Enter the value of k");
scanf("%d", &k);
int rotate[n];
  printf("New array is-");
for(int i=0;i<n;i++)
{
    rotate[(i+k)%n]=arr[i];
}
for(int i=0;i<n;i++)
{
 printf("%d", rotate[i]);
  printf(" ");
}
return 0;
}