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
int a[3][3];
printf("Input the values\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        scanf("%d", &a[i][j]);
    }
}
printf("The matrix is\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d\t", a[i][j]);
}
printf("\n");
}
int sum[3][3];
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        sum[i][j]=arr[i][j]+a[i][j];
    }
}
printf("The sum is-\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d\t", sum[i][j]);
}
printf("\n");
}
    return 0;
}