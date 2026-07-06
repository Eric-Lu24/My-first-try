#include <stdio.h>

int main(){
	
	int cost;
	int wallet;
	printf("请输入你的花销(元)\n");
	scanf("%d",&cost);
	printf("请输入你的现有资金(元)\n");
	scanf("%d",&wallet);
	
	if(cost<=wallet){
		printf("购买成功，剩余金额%d元\n",wallet-cost);
		printf("感谢光顾，下次再会");
	}else{
		printf("资金不足，需要补充%d元\n",cost-wallet);
	}
}
