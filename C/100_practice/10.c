#include <stdio.h>

/*
¹éÄÉ¶ÔÊý--->ì³²¨ÄÇÆõ 
*/
int main(){
	int pair_1=1,pair_2=1,pair_3=0;
	int n,i;
	printf("months?\n");
	scanf("%d",&n);
	if(n==1||n==2){
		printf("2 rabbits");
	}else{
		for (i=3;i<=n;i++){
			pair_3=pair_1+pair_2;
			pair_1=pair_2;
			pair_2=pair_3;
		}
		printf("%d rabbits",pair_3*2);
	}
	return 0;
} 
