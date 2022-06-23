#include <stdio.h>
int n;
void input(int *a,int *w)
{
    printf("\n\tNhap so luong phan tu mang a: ");
    scanf("%d",&n);
	for(int i=0; i<n;i++){
		printf ("\n\tNhap so thu %d: ",i+1);
		scanf("%d",&a[i]);
    }
    printf("\n\tNhap mang w:");
    for(int i=0;i<3;i++){
        printf ("\n\tNhap so thu %d: ",i+1);
		scanf("%d",&w[i]);
    }
}
void calculator(int *a,int *w,int *y)
{
    for(int i=0;i<n-2;i++)
    {
        y[i]=a[i]*w[i%3]+a[i+1]*w[(i+1)%3]+a[i+2]*w[(i+2)%3];
    }
}
void output(int *y)
{
    for(int i=0;i<n-2;i++)
    {
        printf("%d ",y[i]);
    }
}
int main()
{
    int a[203],w[3],y[201];
    input(a,w);
    calculator(a,w,y);
    output(y);

    return 0;
}
