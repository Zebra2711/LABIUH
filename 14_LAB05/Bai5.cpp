#include <stdio.h>
void Dem(int num){
	switch(num)
	{
		case 1:
			printf("Mot");
			break;
		case 2:
			printf("Hai");
			break;
		case 3:
			printf("Ba");
			break;
		case 4:
			printf("Bon");
			break;
		case 5:
			printf("Lam");
			break;
		case 6:
			printf("Sau");
			break;
		case 7:
			printf("Bay");
			break;
		case 8:
			printf("Tam");
			break;
		case 9:
			printf("Chin");
	}
}
void dem(int num){
	char *number;
	switch(num)
	{
		case 1:
			printf("mot");
			break;
		case 2:
			printf("hai");
			break;
		case 3:
			printf("ba");
			break;
		case 4:
			printf("bon");
			break;
		case 5:
			printf("lam");
			break;
		case 6:
			printf("sau");
			break;
		case 7:
			printf("bay");
			break;
		case 8:
			printf("tam");
			break;
		case 9:
			printf("chin");
	}
}
int main()
{
	int x, ch, dv;
    printf("Nhap so co 2 chu so: ");
    scanf("%d",&x);
    ch=(x%100)/10; dv=x%10;
    if (x>=20) {
    	Dem(ch);
    	printf(" ");
    	printf("muoi ");
    }else if(ch==1)
	printf("Muoi ");
	dem(dv);
	return 0;
}
