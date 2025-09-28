/*Q79: Perform diagonal traversal of a matrix.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9*/
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
printf("The diagnol transversal is-\n");
for (int k=0;k<5;k++) 
{
for (int i=0;i<3;i++) 
 {
     int j =k-i;
     if (j>=0 &&j<3) 
     {
        printf("%d ", arr[i][j]);
    }
   }
}
return 0;
}