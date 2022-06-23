#include <stdio.h>
int main()
{
    int a, b, c, d;
    int denominator, numerator;
    /* Example: a fraction is 4/5 
     denominator: 5
     numerator: 4
     */
    printf("Enter the first fraction: ");
    scanf("%d/%d", &a,&b);
    printf("Enter the first fraction: ");
    scanf("%d/%d", &c,&d);
    /*
    Calc two fractions
    a/b+c/d=(a*d+c*b)/(b*d) 
    */
    numerator=a*d+c*b;
    denominator=b*d;
    printf("The sum is %d/%d", numerator, denominator);
    return 0;
}
