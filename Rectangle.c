/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20
*/
#include<stdio.h>
int main()
{
    int l,b,P,A;
    printf("Enter the length");
    scanf("%d", &l);
    printf("Enter the breadth");
    scanf("%d", &b);
    P=2*(l+b);
    A=l*b;
    printf("The area of the rectangle is-%d \n", A);
    printf("The perimeter of the rectangle is-%d \n", P);
    return 0;
}