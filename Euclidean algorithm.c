#include <stdio.h>

//欧几里得
int main(){
	int a,b;
	int c=100;
	printf("请输入两个要求最大公因数的整数:");
	scanf("%d %d",&a,&b);
	while(c>0){
		c = a%b;
		a = b;
		b = c;
		//printf("%d %d %d",a,b,c);
		}
	printf("最大公因数为%d",a); 
} 
