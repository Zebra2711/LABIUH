#include <stdio.h>
int main()
{
	char num;
	printf("Enter integer number from 1 to 7:\n");
	scanf("%d", &num);
	switch(num)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Error!");
	}
	return 0;
}
