#include <stdio.h>
int main()
{
	double a;
	printf("\tNhap so thuc A (0<A<2) ");
	scanf("%lf",&a);
	while (a<0.0){
		printf("\n\tNhap lai: ");
		scanf("%lf",&a);
	}
	double s=0;
	int i;
	for (i=1; s<=a ;i++)
		s+=1.0/i;
	printf("\n\tN = %d",i-1);
	return 0;
}
