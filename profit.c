/*Q22: Write a program to find profit or loss percentage given cost price and selling price.
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/
#include<stdio.h>
int main()
{
float cost,sell,percent;
printf("Enter the cost price\n");
scanf("%f", &cost);
printf("Enter the selling price\n");
scanf("%f", &sell);
if(sell>cost)
{
    percent=((sell-cost)/cost)*100.0;
    printf("The percentage is-%f", percent);
}
else if(cost>sell)
{
    percent=((cost-sell)/cost)*100.0;
    printf("The percentage is-%f", percent);
}
else
{
    printf("No profit and no loss");
}
    return 0;
}