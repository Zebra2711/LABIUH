#include<stdio.h>
#include<ctype.h>
int main()
{
	char alphabet;
	printf("Enter a alphabet ");
	scanf("%c",&alphabet);
	if(islower(alphabet)) /* if(islower(alphabet)),
	 ham islower nay neu alphabet la chu IN THUONG thi if nhan TRUE.
	 neu alphabet la chu cai IN HOA thi if nhan FALSE.*/
		printf("Ky tu %c in hoa la %c",alphabet,toupper(alphabet));
 	else 
		printf("Ky tu %c in thuong la %c",alphabet,tolower(alphabet));
	return 0;
}
