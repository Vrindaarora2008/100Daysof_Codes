/*Q61: Search for an element in an array using linear search.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Array is-  ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int search;
    printf("Enter search item\n");
    scanf("%d", &search);
    for(int j=0;j<n;j++)
    {
        if(search==arr[j])
        {
            printf("FOUND!");
            break;
        }
        else
        {
            printf("NOT FOUND");
            break;
        }
    }
    return 0;
}