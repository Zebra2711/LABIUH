#include <stdio.h>
int gcd(int a, int b){
	while (a!=b)
		if (a>b) a-=b;
		else b-=a;
	return a;
}
int lcm(int a, int b){
	return a*b/gcd(a,b);
}
void xuatKetQua(int a, int b, int gcd, int lcm){
	printf("\tGCD(%d,%d)=%d",a,b,gcd);
	printf("\n\tLCM(%d,%d)=%d",a,b,lcm);	
}
void nhapDuLieu(int &a,int &b){
	do {
		printf("\tNhap a, b: \n\t");
		scanf("%d%d",&a,&b);
	} while( a<=0 && b<=0);
}
int main(){
	int a=-1,b=-1;
	nhapDuLieu(a,b);
	xuatKetQua(a,b,gcd(a,b),lcm(a,b));
	return 0;
}
