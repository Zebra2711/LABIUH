#include <stdio.h>
#include <ctype.h>
#define ENTER 10
int main()
{
	char ch;
	int nVowels=0, nConsonants=0,nOthers=0;
	printf("Nhap ki tu");
	while (ch!=10){
		scanf("%c",&ch);
		ch=toupper(ch);
		if (ch>='A' && ch <='Z')
			switch (ch)
			{
				case 'A': case 'E': case 'I': case 'O': case 'U':
				nVowels ++; break;
				default: nConsonants++;
			}
		else if (ch!=10)
		nOthers++;
	}
	printf("%d Vowels, %d Consonants, Others %d.",nVowels, nConsonants,nOthers);
	return 0;
}
