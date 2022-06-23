#include<stdio.h>
int main()
{
	int i=1;
	printf("Nhap so nguyen x: ");
	int x; scanf("%d", &x);
	x=x*x;
	float y=1;
	while (i<5){
		y=x/y+1;
		i=i+1;
	}
	printf("Gia tri bieu thuc la: %.4f",y-1);
	return 0;
}
