#include <stdio.h>
#include <string.h>
int main() 
{
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int max= 0, curr= 0, start = 0, max2 = 0;
    for (int i = 0; str[i] != '\0'; i++)
     {
        if (str[i]!= ' ' && str[i] != '\n') 
        {
            if (curr == 0)
            { start = i; 
            curr++;
            }
        } 
        else 
        {
            if (curr > max)
             {
                max= curr;
                max2= start;
            }
            currLen = 0; 
        }
    }
    if (curr> max) 
    {
        max = curr;
        max= start;
    }
    printf("Longest word: ");
    for (int i = 0; i < max; i++)
     {
        printf("%c", str[maxStart + i]);
    }
    printf("\nLength: %d\n", max);
    return 0;
}
