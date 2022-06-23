#include <stdio.h>
void fibonacci(int n){
	for(int j=1;j<=n;j++){
		int s = 1, num1 = 1, num2 = 1;
		for ( int i = 3; i <= j; i++)
		{
			s = num1 + num2;
			num1 = num2;
			num2 = s;
		}
		printf(" [%d] ",s);
	}
}
void validDate ( int d, int m, int y){
	int maxd = 31; /*max day of months 1, 3, 5, 7, 8, 10, 12 */
	if ( d<1 || d>31 || m<1 || m>12) d=32;
	/* update maxd of a month */
	if ( m==4 || m==6 || m==9 || m==11) maxd=30;
	else if (m==2)
	{
		/* leap year? */
		if ( y%400==0 || ( y%4==0 && y%100!=0)) maxd=29;
		else maxd=28;
	}
	if (d<=maxd)
		printf("valid date\n");
	else
		printf("invalid date\n");
}
int main(){
	int choice;
	do {
		printf("\n1- in ra n so Fibonacci dau tien\n");
		printf("2- Kiem tra ngay/thang/nam co hop le hay khong?\n");
		printf("3- Thoat\n");
		printf("Chon chuc nang:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				int n;
					printf("nhap n\n");
					scanf("%d", &n);
					fibonacci(n);
			break;
			case 2:
				int d, m, y;
				printf("Nhap ngay thang nam: ");
				scanf("%d%d%d",&d,&m,&y);
				validDate (d, m, y);

		}
	}
	while ( choice > 0 & choice<3);
	return 0;
}

