/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100];
    printf("Enter string\n");
    scanf("%s", s);
    int lastIndex[256]; 
    for(int i=0;i<256;i++)
    {
        lastIndex[i]=-1;
}
    int max=0,start=0;
    for(int i=0;s[i]!='\0';i++)
     {
        if(lastIndex[s[i]]>=start) 
        {
            start=lastIndex[s[i]]+1;
        }
        lastIndex[s[i]]=i;
        int current=i-start+1;
        if(current>max)
            max=current;
    }
    printf("Longest substring length: %d\n", max);
    return 0;
}
