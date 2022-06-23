#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, area, p;
	printf("Nhap do dai ba canh cua tam giac\n **Nhap theo cu phap a,b,c");
	scanf("%f,%f,%f", &a, &b, &c);
	p=(a+b+c)/2;
	area=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("\nPerimeter = %f",p*2);
	printf("\nArea = %f", area);
	return 0;
}
