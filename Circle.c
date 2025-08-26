/*Q4: Write a program to calculate the area and circumference of a circle given its radius.
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/
#include<stdio.h>
int main()
{
    float rad;
    printf("Enter the radius of the circle\n");
    scanf("%f", &rad);
    float A=3.14*rad*rad;
    float circ=2*rad*3.14;
    printf("The area of the circle is-%f\n", A);
    printf("The circumference of the circle-%f\n", circ);
    return 0;
}