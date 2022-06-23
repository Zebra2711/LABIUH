#include <stdio.h>
int main()
{
    printf("Nhap so luong DVD can mua: ");
    int sl; scanf("%d", &sl);
    int kq=sl*5000*(sl>10?.9:1);
    printf("Gia tien ban phai tra la: %d",kq);
    return 0;
}
