#include <stdio.h>
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	for (int i=1;i<=10;i++)
		printf("\n%d x %2d = %d",n,i,n*i);//so d co 2 chu so thi dat %2d
	return 0;
}
