#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, area, hypotenuse;
	printf("Nhap do dai hai canh vuong\n **Nhap theo cu phap a,b\n");
	printf("    /|\n");
	printf("   / |\n");
	printf("  /  | a\n");
	printf(" /  _|\n");
	printf("/__|_|\n");
	printf("   b\n");
	scanf("%f,%f", &a, &b);
	area=a*b/2;
	hypotenuse=sqrt(pow(a,2)+pow(b,2));
	printf("Ảrea = %f",area);
	printf("\nHypotenuse: %f", hypotenuse);
	return 0;
}
