#include <stdio.h>
#include <math.h>
#include <ctype.h>
void Bank_deposit_problem(){
	double deposit; //tien gui ngan hang( a positive number)
	double yearly_rate;//lai suat nam ( a positive number but less than or equal to 0..1)
	double number_of_years; // so nam gui ( positive integer)
	printf("Nhap so tien gui ngan hang: ");
	scanf("%lf", &deposit);
	printf("Nhap lai suat nam (tu 0->1): ");
	scanf("%lf", &yearly_rate);
	printf("Nhap so nam gui: ");
	scanf("%lf", &number_of_years);
	double money=deposit*pow(1.0+yearly_rate,number_of_years);
	printf("So tien co duoc sau khi gui ngan hang la: %.0g",money);
}
void Quadratic_equation(){
	float a, b, c;
    printf("giai phuong trinh bac 2\nax^2+bx+c=0");
    printf("\nNhap a, b, c: ");
    scanf("%f%f%f",&a,&b,&c);
    if (!a)//if a=0
        if (!b) printf(c?"Vo nghiem\n":"Vo dinh\n");//if a=0, b=0 printf(toan tu 3 ngoi)
        else printf( "x = %g\n",-c/b);//if a=0, b!=0
    else {//if a,b!=0
        float d=b*b-4*a*c;// calc delta
        if (d>0)//delta >0 
        printf("x1 = %g\nx2 = %g\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));//phuong trinh co nghiem kep
        else //co the dung if hoac toan tu 3 ngoi
		(!d)?
        printf("x1 = x2 = %g\n",-b/(2*a))//if d=0
        :printf("Vo nghiem\n");//if d<0
        }  	
}
int main(){
	int choice;
	do {
		printf("\n1- Quadratic equation ( phuong trinh bac 2)\n");
		printf("2- Bank deposit problem\n");
		printf("3- Thoat\n");
		printf("Chon chuc nang:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				Quadratic_equation();
			break;
			case 2:
				Bank_deposit_problem();
		}
	}
	while ( choice > 0 & choice<3);
	return 0;
}

