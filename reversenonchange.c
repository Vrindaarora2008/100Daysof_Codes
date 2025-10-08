#include <stdio.h>
#include <string.h>
int main()
 {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);
    int len = strlen(str), start = 0, end;
    for (int i=0;i<=len;i++)
     {
        if (str[i] == ' ' || str[i] == '\0')
         {
             end = i - 1;
            while (start < end)
             {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    printf("Output: %s", str);
    return 0;
}
