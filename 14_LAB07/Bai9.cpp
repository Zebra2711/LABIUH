#include <stdio.h>
#include <math.h>
int main()
{
	double x;
	printf("\tNhap so thuc x: ");
	scanf("%lf",&x);//Nhap x
	// Bat nhap lai neu x khong thuoc [-1;1]
	while (x<-1.0 || x>1.0){
		printf("\n\tNhap lai: ");
		scanf("%lf",&x);
	}
	double e=1, temp,a=1;
	int i=1,n=1;
	//Tim n de phep tinh co sai so = 0.0001
	do {
		n*=i;//Tinh giai thua
		temp=pow(x,i-1)/n;
		//printf("\n\t%d!=%d\n\ttemp: %.5f",i,n,temp); CHECK BUG
		i++;
	} while (temp>=0.0001);
	// tinh e^x voi sai so 0.0001
	for (i=1; i<= n ;i++)
	{
		a*=i;// Tinh giai thua
		e+=pow(x,i)/a;
	}
	printf("\a\n\tEXP(%g) = %g", x, e); //xuat ra gia tri e^x voi sai so 0.0001
}
