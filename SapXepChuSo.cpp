#include<stdio.h>
using namespace std;
int main(){
	int a,b,c;
	printf("Hay nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Hay nhap so thu hai: ");
	scanf("%d",&b);
	printf("Hay nhap so thu ba: ");
	scanf("%d",&c);
	if((a>b&&a>c)&&(b<a&&b>c)){
	printf("cac so da nhap : %d %d %d",c,b,a);
}
	else if((a>b&&a>c)&&(c<a&&c>b)){
	printf("cac so da nhap : %d %d %d",b,c,a);
}
	else if((b>a&&b>c)&&(a<b&&a>c)){
	printf("cac so da nhap : %d %d %d",c,a,b);
}
else if((b>a&&b>c)&&(c<b&&c>a)){
	printf("cac so da nhap : %d %d %d",a,c,b);
}
else if((c>a&&c>b)&&(b<c&&b>a)){
	printf("cac so da nhap : %d %d %d",a,b,c);
}
	else{
	printf("cac so da nhap : %d %d %d",b,a,c);
}
	return 0;
}
