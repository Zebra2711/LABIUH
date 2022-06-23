#include <stdio.h>
#include <math.h>
int main()
{
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
    return 0;
}
