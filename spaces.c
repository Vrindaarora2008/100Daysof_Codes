#include <stdio.h>
int main() 
{
    for (int i = 1; i <= 7; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
        printf("\n");
    }
    for (int i = 3; i >= 1; i -= 2) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        if (i != 1)
        {
            printf("\n");
            printf("\n");
        }
    }

    return 0;
}
