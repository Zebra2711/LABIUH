#include <stdio.h>
int fibonacci(int a){
	int s = 1, num1 = 1, num2 = 1;
	for ( int i = 3; i <= a; i++)
	{
		s = num1 + num2;
		num1 = num2;
		num2 = s;
	}
	return s;
}
int main(){
	int n;
	while (1) {
		printf("\n\n\tNhap N: ");
		scanf("%d", &n);
		while ( n <= 0){
			printf("\n\tNhap lai N (N>0): ");
			scanf("%d", &n);
		}
		printf("\tSo Fibonacci thu %d la %d", n, fibonacci(n));
	}
	return 0;
}
