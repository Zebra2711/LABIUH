#include <stdio.h>
//=============Nhap mang=============//
void input(int *arr,int &n){
    printf("\n\tNhap so luong phan tu: ");
    scanf("%d",&n);
	for(int i=0; i<n;i++){
		printf ("\n\tNhap so thu %d: ",i+1);
		scanf("%d",&arr[i]);
    }
}
//=============Xuat mang=============//
void output(int *arr,int n){
	for(int i=0; i<n;i++){
        printf ("\n\t");
		printf ("%d ",arr[i]);
    }
}
//=============Xuat cac so nguyen to=======//
void primeNum(int *arr,int n){
    int k=0;
    printf ("\n\tPrime Number:");
  	for(int i=0; i<n;i++){
        if (arr[i]%2==0){
            printf("%d ",arr[i]);
            k++;
        }
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
//======Tinh tong cac so chan==========
void sum(int *arr,int n){
	int sum=0;
	for(int i=0; i<n;i++)
		if (arr[i]%2==0) sum+=arr[i];
	printf("\n\tTong cac so chan trong mang la: %d",sum);
}
//=======Them vao vi tri p gia tri x======
void Them(int *arr,int n){
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
void xoa(int *arr,int n){
    int p;
    printf("\n\tNhap vi tri p: ");
    scanf("%d",&p);
    for(int i=p;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n]=NULL;
}
//===============Tim kiem gia tri X trong mang
void tim(int *arr,int n){
    int k=0,x;
    printf("Nhap x: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x) k=+1;
    }
    if (!k) printf("\n\tKhong co phan tu nao co gia tri %d trong mang.",x);
    else printf("\n\tCo %d phan tu nao co gia tri %d trong mang.",k,x);
}
//========sap xep mang===========//
void sapXep(int *arr,int n){
    int minIndex;
    int i,j;
    for(i=0; i< n-1;i++)
    {
        minIndex=1;
        for(j=i+1;j<n;j++)
            if (arr[minIndex]> arr[j]) minIndex=j;
        if (minIndex >i)
        {
            int t=arr[minIndex];
            arr[minIndex]= arr[i];
            arr[i]=t;
        }
    }
}
int main(){
    int arr[100];
    int n;
    input(arr,n);
    output(arr,n);
    primeNum(arr,n);
    domain(arr,n);
    d(arr);
    sum(arr,n);
    Them(arr,n);
    xoa(arr,n);
    tim(arr,n);
    sapXep(arr,n);
    return 0;
}
