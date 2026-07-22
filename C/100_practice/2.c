#include <stdio.h>

int main(){
	double profit,rewarding;
	printf("What's your profit?(input number) * ten thousand\n");
	scanf("%lf",&profit);
	if (profit <= 10){
		rewarding = profit*0.1;
	}else if(profit>10 && profit<20){
		rewarding = (profit-10)*0.075+10*0.1;
	}else if(profit>=20 && profit<40){
		rewarding = (profit-20)*0.05+10*0.075+10*0.1;
	}else if(profit>=40 && profit<60){
		rewarding = (profit-40)*0.03 +20*0.05+10*0.075+10*0.1;
	}else if(profit>=60 && profit<100){
		rewarding = (profit-60)*0.015 +20*0.03+20*0.05+10*0.075+10*0.1;
	}else{
		rewarding = (profit-100)*0.1 +40*0.015+20*0.03+20*0.05+10*0.075+10*0.1;
	}
	printf("total rewarding:%.2lf (ten thousand)",rewarding+profit);
} 
