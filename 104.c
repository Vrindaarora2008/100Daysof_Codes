#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter n\n");
    scanf("%d", &n);
    int totalSum = n*(n+1)/2;
    int leftSum = 0;
    for (int i=1;i<=n;i++)
     {
        leftSum += i;                
        int rightSum = totalSum - leftSum + i;
        if (leftSum == rightSum) 
        { 
            printf("Pivot integer: %d\n", i);
            return 0;
        }
    }
    printf("-1\n"); 
    return 0;
}
