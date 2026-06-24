#include <stdio.h>

int main(){
	int n;
	printf("请输入整数的数目：");
	scanf("%d",&n); 
	int x;
	int i;
	
	for(x=2;x<n;x++){
		int isprime = 1;
		for(i=2;i<x;i++){
			if(x%i == 0){
				isprime = 0;
				break;
				//break的用法：打破循环 
			}
		}
		if(isprime == 1){
			printf("%d ",x);
		}
	}
	printf("\n");
	return 0;
}
