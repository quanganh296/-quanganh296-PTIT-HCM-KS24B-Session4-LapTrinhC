#include <stdio.h>

int main() {
    int day, month, year;

    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

   	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		{
			if(day>0&&day<32)
			{
				printf("ngay %d thang %d nam %d\n",month,day,year);
					printf("ngay thang nam hop le!");
			}
		}
		else if(month==2)
		{    
		if((year%4==0&&year%100!=0)||(year%100==0&&year%400==0)) {
		if(day>0&&day<30)
			{
				printf("ngay %d thang %d nam %d\n",month,day,year);
				printf("nam %d la nam nhuan\n",year);
					printf("ngay thang nam hop le!");
				return 0;
			}
		}
		else if(day>0&&day<29)
			{
				printf("ngay %d thang %d nam %d\n",month,day,year);
					printf("ngay thang nam hop le!");
			}{
			day=28;
		}
			printf("ngay %d thang %d nam %d\n",month,day,year);
				printf("ngay thang nam hop le!");
		}
		else if(month==4||month==6||month==9||month==11) {
			if(day>0&&day<31)
			{
			printf("ngay %d thang %d nam %d\n",month,day,year);
				printf("ngay thang nam hop le!");
			}
		}
		else{
				printf("ngay %d thang %d nam %d \n",month,day,year);
				printf("ngay thang nam khong hop le!");
		}
    return 0;
}

