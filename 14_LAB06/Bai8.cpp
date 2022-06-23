#include <stdio.h>
int main()
{
	int x,i=1,sum=0;
	printf("Nhap so nguyen (nhap 0 de dung):\n");
	while (x!=0){
		printf("num %d: ",i);
		scanf("%d",&x);
		sum+=x;
		i++;
	}
	printf("sum: %d",sum);
	return 0;
}
