#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	printf("\nNhap so nguyen x: ");
	scanf("%d",&x);
	printf("\nNhap so nguyen y: ");
	scanf("%d",&y);
	float z= pow(x+y,2);
	// x^2+y^2=(x+y)^2-2xy, voi z=(x+y)^2
	printf("\nGia tri bieu thuc la: %.4f",sqrt(1+z-2*x*y)/(3+z));
	return 0;
}
