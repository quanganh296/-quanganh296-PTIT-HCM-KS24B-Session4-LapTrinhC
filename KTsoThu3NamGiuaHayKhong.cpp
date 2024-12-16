#include<stdio.h>
using namespace std;
int main(){
	int a,b,c;
	printf("hay nhap so thu nhat: ");
	scanf("%d",&a);
		printf("hay nhap so thu hai: ");
	scanf("%d",&b);
		printf("hay nhap so thu ba: ");
	scanf("%d",&c);
	if (c>a&&c<b)
	{
		printf("so %d nam giua 2 so %d va %d",c,a,b);
	}
	else if(c<a&&c>b){
		printf("so %d nam giua 2 so %d va %d",c,b,a);
	}
	else
	{
		printf("so %d ko nam giua 2 so %d va %d",c,a,b);
	}
	return 0;
}
