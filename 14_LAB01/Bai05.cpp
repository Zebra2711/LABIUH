#include  <stdio.h>
#include <math.h>
#define Pi 3.1415926
int main()
{
  float r;
  double chuVi, dienTich;
  printf("\nnhap ban kinh hinh tron:\t");
  scanf("%f", &r);
  chuVi = r*2*Pi;
  printf("\nChu vi hinh tron la:\t\t %.2f", chuVi);
  dienTich = pow(r,2)*Pi;
  printf("\nDien tich hinh tron la:\t %.2f", dienTich);
  return 0;
}