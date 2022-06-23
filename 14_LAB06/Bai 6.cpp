#include <stdio.h>
#include <math.h>
int main()
{
	long long x;
	// gioi han trên cua kieu long long 9223372036854775807
	printf("Input the number: ");
	scanf("%lld",&x);
	if (x<=0)
		printf("%lld is not prime number.",x);
	else{
		unsigned f=0;//flags (co lenh)
		for (int i=2;i<=sqrt(x);i++){
			if (x%i==0) f+=1;
			if (f==1) break;//tranh bi limit time
		}
		if (f==0)
			printf("%lld is prime number.",x);
		else
			printf("%lld is not prime number.",x);
	}
	return 0;
}
