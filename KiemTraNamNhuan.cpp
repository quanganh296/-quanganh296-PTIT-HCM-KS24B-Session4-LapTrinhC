#include<stdio.h>
using namespace std;
int main(){
	int year;
	printf("Hay nhap nam bat ki:");
	scanf("%d",&month);
if((month%4==0&&month%100!=0)||(month%100==0&&month%400==0))
{
	printf("nam %d la nam nhuan",month);
}
else{
		printf("nam %d ko la nam nhuan",month);
}
	
	return 0;
}
