#include <stdio.h>
int main()
{
    printf("Nhap toa do cua diem M trong mp Oxy");
    printf("\nM(x,y)= ");
	scanf("%d,%d",&x,&y);
	x*y>0?x>0?printf("1st"):printf("3rd"):y<0?printf("4th"):printf("2nd");
	printf(" Quadrant");
    return 0;
}
