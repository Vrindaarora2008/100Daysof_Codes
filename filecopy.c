#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *f1, *f2;
    char ch;
    f1 = fopen("first.txt", "w");
    if (f1 == NULL) 
    {
        printf("File doesn't exist.\n");
        exit(1);
    }
    printf("Enter text\n");
    while ((ch=getchar())!=EOF) 
    {
        fputc(ch, f1);
    }
    fclose(f1);
    f1 = fopen("first.txt", "r");
    if (f1 == NULL) 
    {
        printf("File doesn't exist.\n");
        exit(1);
    }
    f2 = fopen("second.txt", "w");
    if (f2 == NULL) 
    {
        printf("File doesn't exist.\n");
        fclose(f1);
        exit(1);
    }
    while ((ch = fgetc(f1))!=EOF) 
    {
        fputc(ch, f2);
    }
    printf("File copied.\n");
    fclose(f1);
    fclose(f2);
    return 0;
}
