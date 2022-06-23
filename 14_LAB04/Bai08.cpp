#include <stdio.h>
int main()
{
	char x; //input x, x is a character
	printf("Enter a character:\t");
	scanf("%c", &x);
	(x>='0' && x<='9')? printf("This is a number")
	: ((x>='A' && x<='Z') || (x>'a' && x<'z'))?
	printf("This is a alphabet")
	: printf("This is a special character");
	return 0;
}
