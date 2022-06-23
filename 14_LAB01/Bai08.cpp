#include <stdio.h>
int main()
{
    int h, s, m, seconds;
    printf("Input seconds\t:");
    scanf("%d", &seconds);
    h= seconds/3600;
    m= (seconds%3600)/60;
    s= seconds%60;
    printf("There are");
    printf("\nH:M:S-%d:%d:%d",h,m,s);
    return 0;
}