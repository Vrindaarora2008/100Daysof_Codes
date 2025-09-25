#include<stdio.h>
int main()
{
int arr[3][3];
int sum=0;
printf("Input the values\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        scanf("%d", &arr[i][j]);
         sum=sum+arr[i][j];
    }
    printf("\n");
}
printf("Sum 1 is-%d\n", sum);
    return 0;
}