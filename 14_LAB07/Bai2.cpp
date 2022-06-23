#include <stdio.h>
#include <math.h>
int main()
{
	int x,y;
	printf( "\tSo Amstrong co 3 chu so:\n\t" );
	for (int i=1;i<=9;i++)
		for (int j=0;j<=9;j++)
			for (int k=0;k<=9;k++)
				{
					x=100*i+10*j+k;
					y=pow(i,3)+pow(j,3)+pow(k,3);
					if (y==x)  printf("%d ",x);
				}
	return 0;
}

