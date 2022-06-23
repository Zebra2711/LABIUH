#include <stdio.h>
#define ENTER 10
int main()
{
	char x;
	int so=0, chu=0,i=0;
	printf("Nhap so nguyen (nhap 0 de dung):\n");
	while (x!=10){
		i++;
		scanf("%c",&x);
		if (x>='0'&&x<='9') so+=1;
		if ((x>='a'&&x<='z')||(x>='A'&&x<='Z')) chu+=1;
	}
	printf("so luong phim da nhap %d",i-1);//khong tinh phim enter
	printf("%d chu so va %d chu cai",so,chu);
	return 0;
}
