#include <stdio.h>

int main(){
	int n;
	printf("请输入项数:");
	scanf("%d",&n);
	double sum;
	int i;
	for(i=1;i<=n;i++){
		sum += 1.0/i;
	}
	printf("结果为:%f",sum); 
}
