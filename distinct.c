/*Q77: Check if the elements on the diagonal of a matrix are distinct.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True*/
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
int count=1;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(arr[i][i]==arr[j][j])
        {
            count=1;
        }
}
}
printf(!count?"True\n":"False\n");
    return 0;
}