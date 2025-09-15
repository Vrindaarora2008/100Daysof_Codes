/*Q52: Write a program to print the following pattern:
*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>
int main(void) 
{
    for (int i = 0; i < 1; ++i) 
    {
        printf("*\n");
    }
    printf("\n");
    for (int i = 0; i < 3; ++i)
    {
         printf("*\n");
    }
    printf("\n");
    for (int i = 0; i < 5; ++i) 
    {
        printf("*\n");
    }
    printf("\n");
    for (int i = 0; i < 3; ++i)
    { 
        printf("*\n");
    }
    printf("\n");
    for (int i = 0; i < 1; ++i) 
    {
        printf("*\n");
    }
    return 0;
}
