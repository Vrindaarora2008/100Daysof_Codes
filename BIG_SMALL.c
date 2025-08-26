#include<stdio.h>
int main()
{
    int a,b,diff;
    printf("Enter N1\n");
    scanf("%d", &a);
    printf("Enter N2\n");
    scanf("%d", &b);
    if(a>b)
    {
        diff = a-b;
        printf("BIGGER by %d \n", diff);
        if(a%2==0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");        }
    }
      else if(b>a)
    {
        diff = b-a;
        printf("BIGGER by %d \n", diff);
        if(b%2==0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");
        }
    }
    else
    {
        printf("Both are equal");
    }
 return 0;   
}