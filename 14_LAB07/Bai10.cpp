#include <stdio.h>
int main() {
	int i, j;
	printf( "Bang cuu chuong\n" );
	for ( i = 1; i <= 10; ++i ) {
		for ( j = 2; j <= 9; ++j )
			printf( "|%2ux%2u=%2u", j, i, i * j );
		printf( "|\n" );
	}
	return 0;
}
