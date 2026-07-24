#include <stdio.h>
int main(){
	int year,month,day,total;
	printf("year:\n");
	scanf("%d",&year);
	printf("month:\n");
	scanf("%d",&month);
	printf("day:\n");
	scanf("%d",&day);
	
	total=0;
	if((year%4==0 && year%100!=0 )|| year%400==0){
		if (month>2){
			total ++;
		}
	}	
	switch(month){
	case 1:
		break;
	case 2: 
		total += 31;
		break;
	case 3:
		total += 31+28;
		break;
	case 4:
		total += 31+28+31;
		break;
	case 5:
		total += 31+28+31+30;
		break;
	case 6:
		total += 31+28+31+30+31;
		break;
	case 7:
		total += 31+28+31+30+31+30;
		break;
	case 8:
		total += 31+28+31+30+31+30+31;
		break;
	case 9:
		total += 31+28+31+30+31+30+31+31;
		break;
	case 10:
		total += 31+28+31+30+31+30+31+31+30;
		break;
	case 11:
		total += 31+28+31+30+31+30+31+31+30+31;
		break;
	case 12:
		total += 31+28+31+30+31+30+31+31+30+31+30;
		break;
	}
	
	total += day;
	printf("total days:%d\n",total);
	return 0;
}

