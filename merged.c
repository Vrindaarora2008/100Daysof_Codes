/*Q63: Merge two arrays.
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5*/
#include<stdio.h>
int main()
{
int n,m;
printf("Enter size of array 1\n");
scanf("%d", &n);
printf("Enter size of array 2\n");
scanf("%d", &m);
int arr1[n], arr2[m];
for(int i=0;i<n;i++)
{
    scanf("%d", &arr1[i]);
}
for(int i=0;i<m;i++)
{
    scanf("%d", &arr2[i]);
}
printf("Array 1 is-\n");
for(int j=0;j<n;j++)
{
    printf("%d", arr1[j]);
    printf(" ");
}
printf("\n");
printf("Array 2 is-\n");
for(int j=0;j<m;j++)
{
    printf("%d", arr2[j]);
    printf(" ");
}
printf("\n");
int size=m+n;
int arr3[size];
for(int k=0;k<n;k++)
{
    arr3[k]=arr1[k];
}
for(int k=0;k<m;k++)
{
    arr3[n+k]=arr2[k];
}
printf("Merged array=\n");
for(int i=0;i<size;i++)
{
    printf("%d", arr3[i]);
    printf("\t");
}
    return 0;
}