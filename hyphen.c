/*Q88: Replace spaces with hyphens in a string.
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world
*/
#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0;
    printf("Enter any string\n");
    fgets(str, sizeof(str), stdin);
    while(str[i]!='\0')
    {
        if((str[i]==32))
        {
            str[i]='-';
        }
        i++;
    }
    printf("After changing-%s", str);
    return 0;
}