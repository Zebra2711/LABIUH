#include<stdio.h>//khai bao thu vien
int main()
{
	int mark, reward;//Khai bao bien
	printf("Your mark: ");	//in ra man hinh
	scanf("%d", &mark);		//nhap vao so diem(mark)
	reward = mark>8? 500000:0;//neu diem>8 thi thuong 500k, con khong thi tien thuong=0
	printf("Reward:%d\n",reward);//Xuat ra man hinh ket qua
/*	MOT SO CACH VIET KHAC NHUNG DEU CHO KET QUA TUONG TU

	prinf(reward>8? "500000":"0");		
	
	(reward>8)? printf("500000"):printf("0");
*/	
	getchar(); getchar();//nhap ki tu bat ki tu ban phim de dung
	return 0;
}
	
