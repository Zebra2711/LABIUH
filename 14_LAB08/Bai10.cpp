#include <stdio.h>
#include <math.h>
double giaiThua(int a){
	double s=1;
	for (int i=1;i<=a;i++)
		s*=i;
	return s;
}
double tinhEmuX( double x, int n)
{
	double s = 0;
	for(int i=0; i<=n;i++)
	s += pow(x,i)/giaiThua(i);
	return s;
}
int main(){
	int n;
	printf("\tn: ");
	scanf("%d",&n);
	while (n<=1){
		printf("\n\tNhap lai n (n>1): ");
		scanf("%d",&n);
	}
	double x;	
	printf("\tx: "); scanf("%lf",&x);
	printf("\texp(%g) = %g",x,tinhEmuX(x,n));
	return 0;
}
