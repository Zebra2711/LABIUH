#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
//=============Tao mang=============//
void creative_arr(int *arr,int &n){
    printf("\n\tNhap so luong phan tu: ");
    scanf("%d",&n);
    int a,b;
	for(int i=0; i<n;i++){
        a=rand()%51;
        b=pow(-1,rand()%3);
        arr[i]=a*b;
	}
}
//=============Xuat mang=============//
void output(int *arr,int n){
    printf ("\n\t");
	for(int i=0; i<n;i++){
		printf ("%d ",arr[i]);
    }
}
//=============Xuat cac so nguyen to=======//
int isPrime( int k ) {
    unsigned i;
    if ( k == 2 ) return 1;
    if ( k < 2 || k % 2 == 0 ) return 0;
    for ( i = 3; i < ( k >> 1 ); i += 2 )
        if ( k % i == 0 ) return 0;
    return 1;
}
void primeNum(int *arr,int n){

    int k=0;
    printf ("\n\tPrime Number:");
  	for(int i=0; i<n;i++){
        if(isPrime(arr[i]))
            printf("%d ",arr[i]);
        k++;
        }
    if(!k) printf("Khong co so nguyen nao trong mang\n\t");
}
//=====Xuat  cac phan tu co gia tri nam trong doan a,b
void domain(int *arr,int n){
    int a,b;
    int arr2[100];
    int j=0;
	printf("\n\tNhap doan a,b:");
	scanf("%d%d",&a,&b);
	for(int i=0; i<n;i++)
		if (arr[i]>=a && arr[i]<=b) arr2[j]=arr[j++];
    printf ("\n\t");
    for (int i=0;i<j;i++)
        printf("%d ",&arr2[i]);
}

//=======Xuat cac phan tu tu vi tri x toi y
void d(int *arr){
	int x,y,sum=0;
	printf("\n\tNhap doan x,y:");
	scanf("%d%d",&x,&y);
	printf ("\t");
	for(int i=x; i<=y;i++)
        printf("%d ",&arr[i]);
}
//======Tinh gia tri trung binh==========
void average(int *arr,int n){
	int sum=0;
	for(int i=0; i<n;i++)
        sum+=arr[i];
	printf("\n\tGia tri trung binh cua mang la: %g",sum/n);
}
void duoi4_6(int *arr,int n){
    unsigned k=0;
    for(int i=0; i<n;i++)
    {
        if (arr[i]%10==4 || arr[i]%10==6) k++;
    }
    printf("So luong phan tu co duoi 4,6 la: %u",k);
}
void h(int *arr,int n)
{
    for(int i=0; i<n;i++)
    {
        if (arr[i]%2==1) arr[i]*=2;
    }
}
//=======Them vao vi tri p gia tri x======
void add(int *arr,int n){
    int p,x;
    printf("\n\tNhap vi tri p: ");
    scanf("%d",&p);
    printf("\n\tNhap gia tri x: ");
    scanf("%d",&x);
    for(int i=p;i<n;i++){
        arr[i+1]=arr[i];
    }
    arr[p]=x;
}
//===============Xoa phan tu o vi tri p=========
void delete_x(int *arr,int n){
    int p;
    printf("\n\tNhap vi tri p: ");
    scanf("%d",&p);
    for(int i=p;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n]=NULL;
}
//===============Tim kiem gia tri X trong mang
void search_x(int *arr,int n){
    int k=0,x;
    printf("Nhap x: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x) k=+1;
    }
    if (!k) printf("\n\tKhong co phan tu nao co gia tri %d trong mang.",x);
    else printf("\n\tCo %d phan tu nao co gia tri %d trong mang.",k,x);
}
int main(){
    int arr[100];
    int n;
    creative_arr(arr,n);
    output(arr,n);
    primeNum(arr,n);
    domain(arr,n);
    d(arr);
    average(arr,n);
    duoi4_6(arr,n);
    h(arr, n);
    add(arr,n);
    delete_x(arr,n);
    search_x(arr,n);
    return 0;
}
