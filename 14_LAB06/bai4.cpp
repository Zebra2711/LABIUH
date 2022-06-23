#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("1");
	for (int i=2;i<=n;i++)
		if (abs(n)%i==0)
			printf(", %d",i);
	return 0;
}
