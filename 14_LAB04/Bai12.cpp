#include <stdio.h>
int main()
{
	int m, y, d=31;
    printf("Nhap thang, nam ");
    scanf("%d,%d",&m,&y);
    if (m>0 && m<13)
		printf("Nhap sai ");	
    	switch(m)
		{
    		case 4: case 6: case 9: case 10:
    			d=30;
    			printf("So ngay trong thang la: %d",d);
				break;
    		case 2:
    			if (m%400==0) d=29;
    			else d=28;
		}
	printf("So ngay trong thang la: %d",d);
    return 0;
}
