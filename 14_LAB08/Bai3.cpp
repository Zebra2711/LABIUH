#include <stdio.h>
int sum(int n){
	int s=0;
	while (n>=0){
		scanf("%d",&n);
		if (n>0 )s+=n;
	}
	return s;
}
void xuatKetQua(int s){
	printf("\tTong cua cac so vua nhap la %d",s);	
}
int main(){
	int n=0;
	xuatKetQua(sum(n));
	return 0;
}
