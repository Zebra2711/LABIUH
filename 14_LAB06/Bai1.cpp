#include <stdio.h>
int main()
{
	int x;
	int sum=0;
	printf("Nhap 10 so nguyên:\n");
	for (int i=1;i<=10;i++){
		printf("num %d: ",i);
		scanf("%d",&x);
		sum+=x;
	}
	printf("sum: %d\n",sum);
	printf("tb: %g",(float)(sum)/10);
	return 0;
}
