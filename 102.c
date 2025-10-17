#include <stdio.h>
int main()
 {
    int n,x;
    printf("Enter number of elements\n");
    scanf("%d\n", &n);
    int arr[n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to be found\n");
    scanf("%d\n", &x);
    int start=0,end=n-1;
    int result=-1;
    while (start<=end) 
    {
        int mid=(start + end)/2;
        if (arr[mid] >= x) 
        {
            result = mid; 
            end = mid - 1;
        } 
        else 
        {
            start = mid + 1;
        }
    }
    printf("%d\n", result);
    return 0;
}