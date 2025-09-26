#include<stdio.h>
int main()
{
int arr[3][3];
printf("Input the values\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        scanf("%d", &arr[i][j]);
    }
}
printf("The matrix is\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d\t", arr[i][j]);
}
printf("\n");
}
for(int i=0;i<3;i++)
    {
        int sum = 0;
        for(int j=0;j<3;j++)
        {
            sum += arr[i][j];
        }
        printf("Sum of elements of Row %d = %d\n", i+1, sum);
    }
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum += arr[j][i];
        }
        printf("Sum of elements of Column %d = %d\n", i+1, sum);
    }
    return 0;
}