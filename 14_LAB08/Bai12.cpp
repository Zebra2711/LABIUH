#include <stdio.h>
#include <math.h>
int alphabet(char x){
	int k;
	((x>='A' && x<='Z')||(x>='a' && x<='z'))?
	(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'||x=='a'||x=='e'||x=='i'||x=='o'||x=='u')?
	k=1 /*printf("a Vowel")*/:k= 0 //printf("a Consonant")
	: k= -1; //printf("not a alphabet");
	return k;
}
int SumGCD(int n){
	int s=1;
	for (int i = 2; i<=n;i++){
		if(n%i==0) s+=i;
	}
	return s;
}
int soChinhPhuong(int n){
	if(floor(sqrt(n))-sqrt(n)==0) return 1;
	return 0;
}
int main(){
	int choice;
	do {
		printf("1- Kiem tra ki tu la nguyen am hay khong? \n");
		printf("2- Tinhs tong cac uoc cua n\n");
		printf("3- Kiem tra 1 so co phai so chinh phuong hay khong?\n");
		printf("4- Thoat\n");
		printf("Chon chuc nang:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				int x;
					printf("Enter a alphabet: ");
					scanf("%c", &x);
				if ( alphabet(x)==1)
					printf("%c is a Vowel\n");
				else if ( alphabet(x)==0)
					printf("%c is a Consonant\n");
				else
					printf("%c not a alphabet\n");
			break;
			case 2:
					int n;
					printf("nhap n\n");
					scanf("%d", &n);
					printf("Tong cac uoc cua %d la %d\n",n,SumGCD(n));
			break;
			case 3:
					int m;
					printf("nhap n\n");
					scanf("%d", &m);
					if (soChinhPhuong(n))
						printf("%d la so chinh phuong\n",m);
					else
						printf("%d khong la so chinh phuong\n",m);
		}
	}
	while ( choice > 0 & choice<4);
	return 0;
}

