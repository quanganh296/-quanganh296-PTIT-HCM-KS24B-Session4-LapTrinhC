#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int SoDien1,SoDien2,TienDien;
	float SoDien=0.0;
	printf("Hay nhap dien dau thang: ");
	scanf("%d",&SoDien1);
	printf("Hay nhap dien cuoi thang: ");
	scanf("%d",&SoDien2);
	SoDien=SoDien2-SoDien1;
	if((SoDien>=0&&SoDien<50))
	{
		TienDien=10000;
	}
	else if(SoDien>=50&&SoDien<100)
	{
		TienDien=15000;
	}
	else if(SoDien>=100&&SoDien<150)
	{
		TienDien=20000;
	}
	else if(SoDien>=150&&SoDien<200)
	{
		TienDien=25000;
	}
	else if(SoDien>=200)
	{
		TienDien=30000;
}
	float TienDienTieuThu=0.0;
	TienDienTieuThu=(TienDien)*(SoDien-50);
	printf("Tien Dien tieu thu trong thang cua ho gia dinh la: %.2f \n ",TienDienTieuThu);
	return 0;
 } 
