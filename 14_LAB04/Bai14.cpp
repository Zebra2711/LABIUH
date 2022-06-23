#include <stdio.h>
#include <string.h>
void inRaManHinh(double x,char y[2]){
	printf("Diem theo thang 4 la %.2lf - Diem %s",x,y);
}
int main()
{
	char (*y);
	double x;
    printf("Nhap so diem thi tren thang diem 10: ");
    scanf("%lf",&x);
    if (x<0||x>10)
		printf("Khong hop le");
	else
	{
		x=x/2.5;
	    if (x<1) y="F";
	    else if (x<1.5) y="D";
	    else if (x<2) y="D+";
	    else if (x<2.5) y="C";
	    else if (x<3) y="C+";
	    else if (x<3.5) y="B";
	    else if (x<4) y="B+";
	    else y=="A";
	    inRaManHinh(x,y);
	}
    return 0;
}
