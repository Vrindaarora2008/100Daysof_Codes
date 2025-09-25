/*Q68: Delete an element from an array.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5*/
#include <stdio.h>
int main() 
{
    int n, pos;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++)
     {
        scanf("%d", &arr[i]);
    }
    printf("The array is\n");
    for (int i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for (int i=pos;i<n-1;i++) 
    {
        arr[i] = arr[i+1];
    }
    n--; 
    printf("The new array is\n");
    for (int i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
    }
    return 0;
}
