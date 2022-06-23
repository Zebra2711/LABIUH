#include <stdio.h>
int main()
{
	char x; //character
	printf("Enter a alphabet: ");
	scanf("%c", &x);
	printf("This is ");
	((x>='A' && x<='Z')||(x>='a' && x<='z'))?
	(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'||x=='a'||x=='e'||x=='i'||x=='o'||x=='u')?
	printf("a Vowel"):printf("a Consonant")
	: printf("not a alphabet");
	return 0;
}
