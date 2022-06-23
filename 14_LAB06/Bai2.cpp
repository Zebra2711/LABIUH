#include <stdio.h>
int main()
{
	//Tinh giai thua co ban, n la so tu nhien khac khong
	int n, giaiThua=1;
	printf("Nhap n: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		giaiThua*=i;
	}
	printf("n!= %d",giaiThua);
	return 0;
}
