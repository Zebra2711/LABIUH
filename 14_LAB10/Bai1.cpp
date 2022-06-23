#include <stdio.h>
#include <math.h>
#define max 100
int main(){
	int n;
	//a
	printf("\tNhap so luong phan tu can nhap: ");
	scanf("%d", &n);
	if (n > 100 || n < 1) n = max;
	float a[n],sum=.0,ss=.0;
	for(int i=0; i<n;i++){
		printf ("\n\tNhap so thu %d ",i+1);
		scanf("%f",&a[i]);
		sum+=a[i];
		ss+=pow(a[i],2);//d
	}
	for(int i=0; i<n;i++)//b
	printf ("\t%g",a[i]);
	float m=sum/n;//c
	printf ("\n\t%g",m);
	float d2=(ss/n)-pow(m,2);//e
	printf ("\n\t%g",d2);
	float d= sqrt(d2);//f
	printf ("\n\t%g",d);
	
}
