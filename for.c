#include <stdio.h>

int main(){
	int n;
	printf("请输入阶乘正整数:\n");
	scanf("%d",&n);
    int i=1;
	int result=1;	
	for(i=1;i<=n;i++){
		result *= i;
	}
	printf("%d!的结果为:%d",n,result);
	return 0;
}
