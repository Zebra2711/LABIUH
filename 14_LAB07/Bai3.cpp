//#include <stdio.h>
//int main() {
//	int sum,b,a,j,i;
//	printf( "\tSo hoan hoa trong doan [a,b]\n\t" );
//	scanf("%d%d",&a,&b);
//	printf("\t");
//	for (i=a;i<=b;i++) {
//		for ( sum = 0, j = 1; sum<= i && j <= i-1; j++)
//			if (i%j==0) sum+=j;
//		if (sum==i && sum !=0)  printf("%4d ",i);
//	}
//	return 0;
//}
#include <stdio.h>
int main() {
	unsigned n, i, j, sum;
	printf( "Nhap n: " );
	scanf( "%u", &n );
	printf( "Cac so hoan hao nho hon %u: ", n );
	for ( i = 1; i < n; ++i ) {
		for ( sum = 0, j = 1; sum <= i && j <= i / 2; ++j )
			if ( i % j == 0 ) sum += j;
		if ( sum == i ) printf( "%u ", i );
	}
	putchar( '\n' );
	return 0;
}
