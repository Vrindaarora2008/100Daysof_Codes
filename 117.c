/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7*/
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
for (int i=0;i<size-1;i++)
 {
    for (int j=i+1;j<size;j++) 
    {
        if (arr3[i]>arr3[j]) 
        {
            int temp = arr3[i];
            arr3[i] = arr3[j];
            arr3[j] = temp;
        }
    }
}
printf("Merged & Sorted array:\n");
for (int i=0;i<size;i++)
 {
    printf("%d ", arr3[i]);
}
    return 0;
}