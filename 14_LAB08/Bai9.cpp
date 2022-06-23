#include <stdio.h>
#include <math.h>
void Nhap(float&xa,float&ya,float&xb,float&yb,float&xc,float&yc){
	printf("A:"); scanf("%f%f",&xa,&ya);
	printf("B:"); scanf("%f%f",&xb,&yb);
	printf("C:"); scanf("%f%f",&xc,&yc);
}
// CACH 1 KIEM TRA DOAN THANG
//int KiemTra(float d1,float  d2,float d3){
//	if (d1+d2>d3 || d1+d2>d3 || d1+d2>d3) return 1;
//	return 0;
//}
//		CACH 2 KTRA DIEM
int KiemTra(float xa,float ya,float xb,float yb,float xc,float yc){
	// vector AB//AC
	if ((xa-xb)/(xa-xc)==(ya-yb)/(ya-yc)) return 0;
	return 1;
}
float DoanThang(float x1,float y1,float x2,float y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
float DienTich(float d1,float d2,float d3){
	float s=(d1+d2+d3)*0.5;
	printf("\t\ns=%g",s);
	float t=s*(d1-s)*(d2-s)*(d3-s);
	return sqrt(fabs(t));
}
int main(){
	float xa,ya,xb,yb,xc,yc;
	Nhap(xa,ya,xb,yb,xc,yc);
	// CACH 1 KIEM TRA DOAN THANG
	//float d1=DoanThang(xa,ya,xb,yb), d2=DoanThang(xa,ya,xc,yc), d3=DoanThang(xb,yb,xc,yc);
	//if(!KiemTra(d1,d2,d3))
	//		CACH 2 KTRA DIEM
	if(!KiemTra(xa,ya,xb,yb,xc,yc))
		printf("\n\t 3 diem tren thang hang");
	else {
		float d1=DoanThang(xa,ya,xb,yb), d2=DoanThang(xa,ya,xc,yc), d3=DoanThang(xb,yb,xc,yc);
		float S=DienTich(d1,d2,d3);
		printf("Dien tich tam giac ABC %g",S);
	}
	return 0;
}
