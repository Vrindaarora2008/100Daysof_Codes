/*Q89: Count frequency of a given character in a string.
Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/
#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int frequency=0,i=0;
    printf("Enter any string\n");
    fgets(str, sizeof(str), stdin);
    printf("Enter character you wish to find\n");
    scanf("%c", &ch);
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
        frequency++;
        }
        i++;
    }
    printf("Frequency of character is-%d", frequency);
    return 0;
}