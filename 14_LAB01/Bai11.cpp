#include <stdio.h>
int main()
{
    char c;
    printf("INPUT ONE CHAR IN ODER 95 CHAR:\n");
    printf (" !“#$%&'()*+,-./ \n 0123456789:;<=>? \n @ABCDEFGHIJKLMNO \n PORSTUVWXYZ[\]^_ \n `abcdefghijklmno \n pqrstuvwxyz{|}~ \n");
	scanf("%c", &c);
    printf("ASCII: %d",c);
    return 0;
}
