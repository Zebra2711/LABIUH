#include  <stdio.h>
int main()
{
  float chieuDai, chieuRong, chuVi, dienTich;
  printf("nhap chieu dai:\t");
  scanf("%f", &chieuDai);
  printf("\nnhap chieu rong:\t");
  scanf("%f", &chieuRong);
  chuVi = (chieuDai + chieuRong)*2;
  printf("\nChu vi HCN la:\t %.2f", chuVi);
  dienTich = chieuDai*chieuRong;
  printf("\nDien tich HCN la:\t %.2f", dienTich);
  return 0;
}