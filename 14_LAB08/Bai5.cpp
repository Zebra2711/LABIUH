#include <stdio.h>
#include <math.h>
int isPrime( int n){
	int m = sqrt(n);
	if (n<2) return 0;
	for (int i=2; i<=m; i++)
	if (n%i==0) return 0 ; /* n không phai là so nguyên to */
	return 1; /* n là so nguyên to */
}
int main(){
	//Suggested algorithm
	int n,i,j;
	do {
		scanf("%d",&n);
	}
	while (n<2);
		for ( i=2 ;i<= n;i++ ){
			if (isPrime(i))
			printf("\n\t%d",i);
		}
    return 0;
}

