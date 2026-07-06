#include <stdio.h>

int main(){
	int n;
	printf("ÇëÊäÈëÏîÊý:");
	scanf("%d",&n);
	double sum;
	int i;
	for(i=1;i<=n;i++){
		sum += 1.0/i;
	}
	printf("½á¹ûÎª:%f",sum); 
}
