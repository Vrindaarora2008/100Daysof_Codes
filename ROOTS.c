#include<stdio.h>
int main()
{
int a,b,c,D;
printf("Enter value of a from the equation.\n");
scanf("%d", &a);
printf("Enter value of b from the equation.\n");
scanf("%d", &b);
printf("Enter value of c from the equation.\n");
scanf("%d", &c);
D=(b*b)-4*a*c;
printf("The discrimanant is-%d", D);
if(D>0)
{
    printf("THE ROOTS ARE REAL AND DISTINCT");
}
else if(D=0)
{
    printf("THE ROOTS ARE REAL AND EQUAL");
}
else
{
    printf("THE ROOTS ARE IMAGINARY");
}
return 0;
}