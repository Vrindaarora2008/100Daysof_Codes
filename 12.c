#include<stdio.h>
int main()
{
FILE*fptr;
int count=0, count1=0,wc=0;
fptr=fopen("D:/Document.txt","r");
char str1;
str1=fgetc(fptr);
while(str1!=EOF)
{
    if(str1=='\n')
    count1++;
     if(str1>='A' && str1<='Z' || str>='a' && str1<='z')
    count++;
    if(str1!=' ' || str1!='\n')
    wc++;
}
printf("Number of lines=%d", count);
printf("Number of character is=%d", count1);
printf("Number of words is-%d", wc);
fclose(fptr);
    return 0;
}