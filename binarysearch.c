/*Q65: Search in a sorted array using binary search.
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1*/
#include<stdio.h>
int main()
{
    int n,key,low=0;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
for(int a=0;a<n;a++)
{
    scanf("%d", &arr[a]);
}
int high=n-1,mid,found-0;
printf("Enter number you want to find\n");
scanf("%d", &key);
while(low<=high)
{
    mid=(low+high)/2;
    if(arr[mid]==key)
    {
        printf("Element %d found at position %d\n", key,mid+1);
        found=1;
        break;
    }
    else if(arr[mid]<key)
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
}
if(!found)
{
    printf("Element %d not found \n", key);
}
return 0;
}