#include <stdio.h>
int main()
{
	int y, x=0;
	// De cua hang khong bi lo nang neu nhap nguoi mua nhap so am(x<0)
	while (x<=0)
	{
		printf("Nhap so ao T-shirt can mua: ");
		scanf("%d",&x);
	}	
	if (x<=3) y=120000;
	else if (x<7) y=90000;
	else if (x<11) y=85000;
	else y=70000;
	printf("Tien phai tra la: %d",x*y);
	return 0;
}
