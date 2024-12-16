#include<stdio.h>
using namespace std;
int main(){
	int year;
	printf("Hay nhap nam bat ki:");
	scanf("%d",&year);
if((year%4==0&&year%100!=0)||(year%100==0&&year%400==0))
{
	printf("nam %d la nam nhuan",year);
}
else{
		printf("nam %d ko la nam nhuan",year);
}
	
	return 0;
}
