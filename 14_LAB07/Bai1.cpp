#include <stdio.h>
int main()
{
	float fahrenheit, celcius;
	printf("\tCelcius Fahrenheit\tFahrenheit Celcius\n");
	for (int i=0; i<=10;i++)
	{
		fahrenheit=9.0*i/5+32;
		printf("\t%7d %10.2f",i,fahrenheit);
		celcius=5.0*i/9;
		printf("\t%10d %7.2f\n",i+32,celcius);
	}
	return 0;
}
