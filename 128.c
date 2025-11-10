/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10*/
#include<stdio.h>
int main()
{
FILE*fptr;
int count=0,c=0;
fptr=fopen("input.txt","r");
char str1;
str1=fgetc(fptr);
while(str1!=EOF)
{
    if(str1=='a' || str1=='e' || str1=='i' || str1=='o' || str1=='u' || str1=='A' || str1=='E' || str1=='I' || str1=='U' || str1=='O')
    {
    count++;
    }
    else
    {
    c++;
    }
}
printf("Number of vowels=%d", count);
printf("Number of consonants=%d", c);
fclose(fptr);
    return 0;
}