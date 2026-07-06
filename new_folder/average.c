#include <stdio.h>

int main(){
	int count=0;
	int sum=0;
	int input;
	
	printf("请输入要计算平均数的原始数据（自然数)，输入-1后停止加和并计算结果\n");
	scanf("%d",&input);
	while (input!=-1){
		sum += input;
		count ++;
		scanf("%d",&input);
	}
	printf("%f",1.0*sum/count);
}
