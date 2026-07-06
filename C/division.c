#include <stdio.h>

int main(){
	int x;
	int t;
	printf("ÇëÊäÈëÒªÇÐ·ÖµÄÕûÊý:\n");
	scanf("%d",&x);
	t = x;
	int mask=1;
	
	while(x>9){
		x /= 10;
		mask *= 10;
	}
	//printf("%d",mask);
	
	do{
		if (mask>9){
			printf("%d ",t/mask);
		}else{
			printf("%d",t/mask);
		}  
		t %= mask;
		//printf(" %d \n",t);
		mask /=10;
	} while(mask>0);
	return 0;
}
