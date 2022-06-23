#include<stdio.h>
int main()
{
	int d;
	printf("Nhap so ngay thue: ");
	scanf("%d", &d);
	printf("So tien la: %d vnd",(d/7)*700000+(d%7)*120000);
	return 0;
}
	
