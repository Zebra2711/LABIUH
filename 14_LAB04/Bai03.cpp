#include <stdio.h>
 void hhh(int  str)
{
	printf("So lon nhat la so thu %d",str);
}
int main()
{
    printf("Nhap 3 so tu ban phim");
    printf("\nSo thu nhat: ");
    int a; scanf("%d", &a);
    printf("So thu hai: ");
    int b; scanf("%d", &b);
    printf("So thu ba: ");
    int c; scanf("%d", &c);
    int str;
	if (a>b)
   		if (a>c) str=1;
        else str=2;
    else
        if (b>c) str=2;
        else str=3;
    hhh(str);
    return 0;
}
