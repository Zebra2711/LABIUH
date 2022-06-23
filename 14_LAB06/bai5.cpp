#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	float sum=0, t=0;
	printf("Input the number or terms: ");
	scanf("%d",&x);
	for (int i=1;i<=x;i++){
		t+=9*pow(10,i-1);
		sum+=t;
		printf("%d",sum);
	}
	printf("sum of the series: %g",sum);
	return 0;
}
