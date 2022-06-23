#include <stdio.h>
#include <math.h>
#define swap {int t=a; a=b; b=t;}
int main()
{
	int a,b;
	int ucln;
	printf("Nhap 2 so duong a,b: ");
	scanf("%d%d",&a,&b);
	if (a<b) swap(a,b);
	for (int i=1;i<=b;i++)
		if (a%i==0 && b%i==0) ucln=i;
	printf("UCLN: %d",ucln);
	return 0;
}
