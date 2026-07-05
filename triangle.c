#include <stdio.h>

int main(){
	int lines;
	scanf("%d",&lines);
	int i,j,k;
	for (i=1;i<=lines;i++){
		for (j=1;j<=lines-i;j++){
			printf(" ");
		}
		for (k=1;k<=i*2-1;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
} 
