#include <stdio.h>
#include <math.h>
int isPrime( int n){
	int m = sqrt(n);
	if (n<2) return 0;
	for (int i=2; i<=m; i++)
	if (n%i==0) return 0 ; /* n không phai là so nguyên to */
	return 1; /* n là so nguyên to */
}
void printMinMaxDigits( int n)
{
	int digit;
	int min, max ;
	int remainder = n% 10;
	n=n/10; /* 1029 */
	min=max=remainder;
	while (n>0)
	{
		remainder = n%10; /* Get the next digit */
		n=n/10;
		if (min > remainder)
			min=remainder; /* update results */
		if (max < remainder)
			max=remainder;
	}
	printf("Min=%d\nMax=%d",min, max);
}
int main(){
	int choice;
	do {
		printf("1- So nguyen to \n");
		printf("2- In chu so min, max.\n");
		printf("3- Thoat\n");
		printf("Chon chuc nang:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				int n;
				do
				{
					printf("nhap n\n");
					scanf("%d", &n);
				}
				while(n<0);
				if ( isPrime(n)==1)
					printf("n la so nguyen to\n");
				else
					printf("n khong phai la so nguyen to\n");
				break;
			case 2:
				do
				{
					int n;
					printf("nhap n\n");
					scanf("%d", &n);
				}
				while(n<0);
					printMinMaxDigits(n);
				break;
		}
	}
	while ( choice > 0 & choice<3);
	return 0;
}

