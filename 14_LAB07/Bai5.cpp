#include <stdio.h>
int main()
{
	printf("\tNhap so nguyen duong N: ");
	int n; scanf("%d", &n);
	while (n<0){
		printf("\n\tNhap lai: ");
		scanf("%d", &n);
	}
	int s,i;
	s=n;
	i=n-2;
	for ( i;  i>=1; i -= 2)
		s*=i;
	printf("\n\tS= %d",s);
	return 0;
}
