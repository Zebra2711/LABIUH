#include <stdio.h>
double giaiThua(int a){
	double s=1;
	for (int i=1;i<=a;i++)
		s*=i;
	return s;
}
int main(){
	int n;
	printf("\tN: "); scanf("%d",&n);
	while (n<=0){
		printf("\n\tNhap lai N (N>0): "); scanf("%d",&n);
	}
	printf("\t%d! = %g",n,giaiThua(n));
	return 0;
}
