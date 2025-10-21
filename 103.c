#include <stdio.h>
int main() 
{
    int n, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    int totalSum = 0, leftSum = 0;
    for (i = 0; i < n; i++)
        totalSum += nums[i];
    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            printf("Pivot index: %d\n", i);
            return 0;
        }
        leftSum += nums[i];
    }
    printf("-1\n");
    return 0;
}
