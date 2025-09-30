/*Q82: Print each character of a string on a new line.
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i*/
#include <stdio.h>
int main() 
{
    char str[100];
    int count=0;
    scanf("%s", str);
    while (str[count]!='\0') 
    {
        printf("%c\n", str[count]);
        count++;
    }
    return 0;
}
