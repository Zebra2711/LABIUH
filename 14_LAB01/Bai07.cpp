#include <stdio.h>
int main()
{
    int d, w, y, numberOfDay;
    printf("Number of day\t:");
    scanf("%d", &numberOfDay);
    y= numberOfDay/365;
    w=(numberOfDay%365)/7;
    d=(numberOfDay%365)%7;
    printf("\nYear\t: %d\nWeeks\t: %d\nDay\t: %d",y,w,d);
    return 0;
}
