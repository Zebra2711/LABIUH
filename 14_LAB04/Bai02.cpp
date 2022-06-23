#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhap vao hai so nguyen a va b(b!=0)");
    printf("\nNhap so a "); 
    scanf("%d", &a);
    printf("\nNhap so b ");
    scanf("%d", &b);
    if (a%b==0) printf("\n%d la uoc cua %d",b,a);
    else printf("\n%d khong phai la uoc cua %d",b,a);
    return 0;
}
