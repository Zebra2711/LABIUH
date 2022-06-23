#include <stdio.h>
int main()
{
    double temp, convert; // Temperature(nhiet do), Convert(chuyen doi)
    int scale;//Temperature scales(thang nhiet do)
    printf("***Convert between temperature scales***\n");
    printf("Enter 1 or 2 to choose Temperature you want convert");
    printf("\n1.Celsius to Degree Fahrenheit\n");
    printf("2.Degree Fahrenheit to Celsius\n");
    scanf("%d", &scale);
    while (scale<1 || scale>2)
    {
        printf("\nError, please try again\t");
        scanf("%d", &scale);
    }
    switch (scale)
    {
        case 1:
            printf("C: ");
            scanf("%lf", &temp);
            convert=temp*9/5+32;
            printf("%.2f(C)--> %.2f(F)", temp, convert);
            break;
        case 2:
            printf("F: ");
            scanf("%lf", &temp);
            convert=(temp-32)*5/9;
            printf("%.2f(F)--> %.2f(C)", temp, convert);
    }
	return 0;
}
