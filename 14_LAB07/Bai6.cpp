#include <stdio.h>
#include <math.h>
int main()
{
	printf("\tNhap so nguyen duong N: ");
	int n; scanf("%d",&n);
	while (n<=0){
		printf("\n\tNhap lai: ");
		scanf("%d",&n);
	}
	float s=0;
	for (int i=1; i<=n;i++)
		s+=pow(-1,i-1)/(4*pow(i,2));
	printf("\n\tS = %g",s);
	return 0;
}
