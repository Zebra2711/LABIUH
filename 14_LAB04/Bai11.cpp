#include <stdio.h>
int main()
{
	int y=0, x=0;
	// De nha may khong bi lo nang neu nhap nguoi dung nhap so am(x<0)
	while (x<=0)
	{
		printf("Nhap so dien da dung: ");
		scanf("%d",&x);
	}	
	if (x<=100) y+=x*950;
	else if (x<=150) {
		y+=100*950;
		y+=(x-100)*1250;
	}
	else if (x<=200) {
		y+=100*950;
		y+=50*1250;
		y+=(x-150)*1350;
	}
	else {
		y+=100*950;
		y+=50*1250;
		y+=50*1350;
		y+=(x-200)*1550;
	}
	printf("Tien phai tra la: %d",y);
	return 0;
}
