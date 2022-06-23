#include<stdio.h>
#include<math.h>
int main()
{
    double x1, y1, x2, y2, khoangCach;
    printf("Nhap toa do diem theo cu phap M(Xm;Ym)");
    printf("\n Toa do diem A ");
    scanf("%lf;%lf", &x1, &y1);
    printf("\n Toa do diem B ");
    scanf("%lf;%lf", &x2, &y2);
    khoangCach=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("\nKhoang cach giua 2 diem la %.3f", khoangCach);
    return 0;
}
