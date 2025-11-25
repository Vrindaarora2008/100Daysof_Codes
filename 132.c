/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go*/
#include <stdio.h>
enum Light { RED, YELLOW, GREEN };
int main() 
{
    enum Light signal;
    int choice;
    printf("Enter 0 for RED, 1 for YELLOW, 2 for GREEN\n");
    scanf("%d", &choice);
    signal=choice;
    if (signal==RED)
    {
        printf("Stop\n");
    }
    else if (signal==YELLOW)
    {
        printf("Wait\n");
    }
    else if (signal==GREEN)
    {
        printf("Go\n");
    }
    else
    {
        printf("Invalid choice!\n");
    }
    return 0;
}
