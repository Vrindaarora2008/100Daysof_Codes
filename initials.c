/*Q97: Print the initials of a name.
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/
#include <stdio.h>
int main() 
{
    char name[100];
    int i;
    printf("Enter your full name: ");
   fgets(name, sizeof(name), stdin);
    for (i = 0; name[i] != '\0'; i++) 
    {
       if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ')
        {
            char next = name[i + 1];
            printf("%c.", next);
        }
    }
    return 0;
}

