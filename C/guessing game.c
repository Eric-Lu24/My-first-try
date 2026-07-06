#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	//关于取随机数的代码先照抄了 
	srand(time(0));
	int target =rand()%100+1;
	int guess;
	int count;
	
	printf("请在1~100内猜一个数"); 
	do{
		scanf("%d",&guess);
		count ++; 
		if(target>guess){
			printf("小了");
		}else if(target<guess){
			printf("大了");
		}
	}while(target!=guess);
	
	printf("太棒了，你花了%d次机会猜中了答案",count) ;
}
