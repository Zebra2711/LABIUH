#include<stdio.h>
int main()
{
	int a, b;
	printf("\nNhap hai so a, b\n *Theo form a,b :");
	scanf("%d,%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nHoan doi...\n=>a=%d, b=%d",a,b);
	return 0;
}
	
