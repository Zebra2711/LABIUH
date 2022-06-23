#include <stdio.h>
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
	int n;
	do {
		scanf("%d",&n);
		printMinMaxDigits(n);
	}
	while (n<0);
	return 0;
}
