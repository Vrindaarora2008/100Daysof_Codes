#include <stdio.h>
int main() 
{
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    int i = 0;
    if (name[i] != ' ')
     {
        printf("%c.", name[i]);
    }
    while (name[i] != '\0') 
    {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 2] != '\0') 
        {
            int j = i + 1;
            int spaceFound = 0;
            while (name[j] != '\0') 
            {
                if (name[j] == ' ')
                 {
                    spaceFound = 1;
                    break;
                }
                j++;
            }

            if (spaceFound)
                printf("%c.", name[i + 1]);
            else 
            {
                printf(" ");
                while (name[i + 1] != '\0')
                 {
                    printf("%c", name[i + 1]);
                    i++;
                }
                break;
            }
        }
        i++;
    }
    return 0;
}
