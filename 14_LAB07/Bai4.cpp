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
	float s1=0,s2=0,s3=1,s4=0;
	for (int i=1; i<=n;i++)
	{
		s1+=i;
		s2+=pow(i,2);
		s3*=(float)(2*i-1)/(2*i);
		s4+=i*(i+1)*(i+2);
	}
	s1=s1/n;
	s2=sqrt(s2);
	printf("\n\tS1 = %g\n\tS2 = %g\n\tS3 = %g\n\tS4 = %g",s1,s2,s3,s4);
	return 0;
}
