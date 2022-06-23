#include <stdio.h>
int main()
{
	float x;
    printf("Nhap so diem trung binh tren thang diem 10: ");
    scanf("%d",&x);
    while (x<0||x>10)
	{
		printf("Diem k hop le, nhap lai ");
		scanf("%d",&x);
	}
    if (x<5) 
    	printf("Yeu");
    else if (x<6)
    	printf("TRung Binh");
    else if (x<7)
    	printf("Trung Binh Kha");
    else if (x<8)
    	printf("Kha");
    else if (x<9)
    	printf("Gioi");
    else
    	printf("Xuat Sac");
    return 0;
}
