#include<stdio.h>
int main()
{
    int S1,S2,S3,S4,S5,avg;
    printf("Enter marks for subject 1\n");
    scanf("%d",&S1);
     printf("Enter marks for subject 2\n");
    scanf("%d",&S2);
     printf("Enter marks for subject 3\n");
    scanf("%d",&S3);
     printf("Enter marks for subject 4\n");
    scanf("%d",&S4);
     printf("Enter marks for subject 5\n");
    scanf("%d",&S5);
    avg=(S1+S2+S3+S4+S5);
    float p=(avg/500.0)*100.0;
    if(p<85)
    {
printf("YOUR GRADE IS O(OUTSTANDING)");
    }
else if(p<75)
    {
printf("YOUR GRADE IS A");
    }
    else if(p<60)
    {
printf("YOUR GRADE IS B");
    }
    else if(p<40)
    {
printf("YOUR GRADE IS C");
    }
   else if(p<35)
    {
printf("YOUR GRADE IS D");
    }
    else
    {
        printf("YOUR GRADE IS F");
    }
    return 0;
}