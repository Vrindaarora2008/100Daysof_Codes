/*Q81: Count characters in a string without using built-in length functions.
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:

Output 2:
1*/
#include<stdio.h>
int main()
{
char str[100];
printf("Enter string\n");
scanf("%s", str);
int count=0;
while(str[count]!='\0')
{
    count++;
}
printf("The count of characters in string is-%d", count);
    return 0;
}