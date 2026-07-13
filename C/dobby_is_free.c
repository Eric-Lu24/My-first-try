#include <stdio.h>
#include <stdlib.h>

int main(){
	int number;
	int *dobby;
	int t;
	printf("how many items?\n");
	scanf("%d",&number);
	dobby = (int*)malloc(number*sizeof(int));
	for (t=1;t<=number;t++){
		printf("item %d:",t);
		scanf("%d",&dobby[t-1]);
	}
	for (t=1;t<=number;t++){
		printf("%d,",dobby[t-1]);
	}
	free(dobby);
	return 0; 
}
