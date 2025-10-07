#include <stdio.h>
#include <string.h>
void swap(char *a, char *b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void sortString(char str[]) 
{
    int n = strlen(str);
    for (int i=0;i<n-1;i++) 
    {
        for (int j=i+1;j<n;j++) 
        {
            if (str[i]>str[j]) 
            {
                swap(&str[i], &str[j]);
            }
        }
    }
}
int main() 
{
    char str1[100], str2[100];
    printf("Enter first string\n");
    scanf("%s", str1);
    printf("Enter second string\n");
    scanf("%s", str2);
    if (strlen(str1)!= strlen(str2)) 
    {
        printf("Not Anagrams\n");
        return 0;
    }
    sortString(str1);
    sortString(str2);
    if (strcmp(str1, str2) == 0)
        printf("Anagrams\n");
    else
        printf("Not Anagrams\n");
    return 0;
}
