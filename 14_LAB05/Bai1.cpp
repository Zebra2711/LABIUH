#include <stdio.h>
#include <ctype.h>
int main()
{
	char diem;
	printf("Enter one bottom from your key broad\n{E, V, G, A, F}\n");
	scanf("%c", &diem);
	switch(toupper(diem))
	{

		case 'A':
			printf("Average");
			break;
		case 'E':
			printf("Excellent");
			break;
		case 'F':
			printf("Fail");
			break;
		case 'V':
			printf("Very Good");
			break;
		case 'G':
			printf("Good");
			break;
		default:
			printf("Error! the character you input not is one of {E, V, G, A, F}");
	}
	return 0;
}
