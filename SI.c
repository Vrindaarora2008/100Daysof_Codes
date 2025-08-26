/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int P,SI,T,R,n;
    float r,CI;
    printf("Enter principal\n");
    scanf("%d", &P);
    printf("Enter time\n");
    scanf(" %d", &T);
    printf("Enter rate\n");
    scanf("%d", &R);
    printf("Enter interest rate\n");
    scanf("%f", &r);
    printf("Enter times interest is compounded every year\n");
    scanf("%d", &n);
    SI=(P*R*T)/100;
    CI=P*(pow((1+r/100.0),n))-P;
    printf("%d", SI);
    printf("%f", CI);
    return 0;
}