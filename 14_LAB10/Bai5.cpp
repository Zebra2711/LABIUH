#include <stdio.h>
#include <string.h>
#define MAX 100
void insertOrder( int* a, int *n, int x ) {
    int i = 0;
    while ( i < *n && a[i] > x ) i++;
    if ( i < *n )
        memmove( a + i + 1, a + i, ( *n - i ) * sizeof( *a ) );
    a[i] = x;
    (*n)++;
}
int tableReadAndSort( int* a ) {
    int n, x;
    for ( n = 0; scanf( "%d", &x ) == 1 && n < MAX; )
        insertOrder( a, &n, x );
    return n;
}
int main(){
    int a[MAX];
    int n, i;
    printf( "Nhap khong qua 100 phan tu (Ctrl+Z de dung)\n" );
    n = tableReadAndSort( a );
    for ( i = 0; i < n; ++i )
        printf( "%d ", a[i] );
    putchar( '\n' );
    return 0;
}
