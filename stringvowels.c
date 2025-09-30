#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int vowels=0,consonants=0,spaces=0,i=0;
    printf("Enter any string\n");
    fgets(str, sizeof(str), stdin);
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }
        else if(str[i]==(char)32)
        {
            spaces++;
        }
        else 
        {
            consonants++;
        }
        i++;
    }
    printf("Vowels = %d\n", vowels);
    printf("Consonants= %d", consonants);
    return 0;
}