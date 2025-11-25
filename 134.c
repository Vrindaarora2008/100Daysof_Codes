/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed*/
#include<stdio.h>
enum OPERATION { SUCCESS, FAILURE, TIMEOUT};
int main()
{
int choice;
enum OPERATION op;
printf("Enter 0 for Success, 1 for Failure and 2 for timeout\n");
scanf("%d", &choice);
choice=op;
if(op==SUCCESS)
{
printf("OPERATION SUCCESSFUL\n");
}
else if(op==FAILURE)
{
printf("OPERATION FAILED\n");
}
else
{
printf("Operation on timeout\n");
}
return 0;
}