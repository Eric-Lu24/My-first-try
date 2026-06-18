#include <stdio.h>

int main(){
	int num=0;
	int out=0; 
	printf("请输入一个正整数\n"); 
	scanf("%d",&num);
	while(num>0){
		out = out*10 + num%10;
		num /= 10;
	
	}
	printf("倒序结果为:%d",out); 
}
