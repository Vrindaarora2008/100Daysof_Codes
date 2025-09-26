#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the number of rows\n");
    scanf("%d", &a);
    printf("Enter the number of columns\n");
    scanf("%d", &b);
    int arr[a][b], transpose[a][b];
    printf("Input the values:\n");
    for (int i=0;i<a;i++) 
    {
        for (int j=0;j<b;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i=0;i<a;i++) 
    {
        for (int j=0;j<b;j++) 
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
     for (int i=0;i<a;i++) 
    {
        for (int j=0;j<b;j++) 
        {
            transpose[i][j]=arr[j][i];
        }
        printf("\n");
    }
     for (int i=0;i<a;i++) 
    {
        for (int j=0;j<b;j++) 
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
