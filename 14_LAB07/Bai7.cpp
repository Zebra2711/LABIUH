#include <stdio.h>
#include <math.h>
int main()
{
	printf("\tNhap so nguyen duong N: ");
	int n; scanf("%d",&n);
	while (n<0){
		printf("\n\tNhap lai: ");
		scanf("%d",&n);
	}
	float s=0;
	for (int i=0; i<=n;i++)
		s+=pow(-1,i)/pow(2*i+1,2);
	printf("\n\tS = %g",s);
	return 0;
}
	/* (-1)^n
	std::pow(-1, n)
	std::pow(-1, n%2)
	(n%2?-1:1)
	(1-2*(n%2))  // (gives incorrect value for negative n)
	*/
