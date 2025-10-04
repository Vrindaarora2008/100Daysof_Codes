/*Q87: Count spaces, digits, and special characters in a string.
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1
*/
#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int spaces=0,digits=0,others=0,i=0;
    printf("Enter any string\n");
    fgets(str, sizeof(str), stdin);
    while(str[i]!='\0')
    {
        if((str[i]==32))
        {
            spaces++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }
        i++;
    }
    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);
    return 0;
}