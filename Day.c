/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday
*/
#include<stdio.h>
int main()
{
int day;
printf("Enter the day\n");
scanf("%d", &day);
switch(day)
{
case 1:
 printf("MONDAY");
 break;  
case 2:
 printf("TUESDAY");
 break; 
case 3:
 printf("WEDNESDAY");
 break; 
case 4:
 printf("THURSDAY");
 break; 
case 5:
 printf("FRIDAY");
 break; 
case 6:
 printf("SATURDAY");
 break; 
case 7:
 printf("SUNDAY");
 break;  
 default:
printf("INVALID DAY");
}
    return 0;
}