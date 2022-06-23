#include <stdio.h> 
int main()
{
	int a,b,i=4;
	int tr, ch, dv;
	printf("Nhap so co 3 chu so");
	printf("\nNhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	printf("\t%6d\n",a);
	printf("\tx%5d\n",b);
	printf("\t  -----\n");
	tr=b/100; ch=(b%100)/10; dv=b%10;
	printf("\t%6d\n",a*dv);
	printf("\t%5d\n",a*ch);
	printf("\t%4d\n",a*tr);
	printf("\t-------\n");
	printf("\t%6d\n",a*b);	
	return 0;
}
