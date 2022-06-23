#include <stdio.h>
#include <math.h>
int main()
{
    float canNang, chieuCao;
    double bmi;
    printf("nhap can nang (kg):\t");
    scanf("%f", &canNang);
    printf("\nnhap chieu cao (cm):\t");
    scanf("%f", &chieuCao);
    chieuCao = chieuCao/100;//cm->m
    bmi = canNang/pow(chieuCao,2);
    printf("\nChi so BMI:\t %.2f", bmi);
    return 0;
}
