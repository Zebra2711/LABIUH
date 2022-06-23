#include<stdio.h>
#include<math.h>
#define Pi 3.141593
int main()
{
	double area;
	printf("Nhap dien tich: ");
	scanf("%lf",&area);
	printf("The tich la: %lf\n",sqrt(area/(4*Pi))*area/3*4);
	return 0;
}
