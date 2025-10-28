/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400*/
#include <stdio.h>
int main() 
{
    int n, k;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
     {
        scanf("%d", &arr[i]);
    }
    printf("Enter value of k\n");
    scanf("%d", &k);
    int current=0;
    for(int i=0;i<k;i++) 
    {
        current+= arr[i];
    }
    int max=current;
    for(int i=k;i<n;i++) 
    {
        current=current-arr[i-k]+arr[i];
        if(current>max) 
        {
            max=current;
        }
    }
    printf("Maximum sum of subarray of size %d is: %d\n", k, max);
    return 0;
}
