#include <stdio.h>

int main(){
	int count[10];
	int i,input;
	printf("if you input \"-1\":exit\n");
	
	for (i=0;i<10;i++){
		count[i] = 0;
	}
	
	input = 100;
	while(input!=-1){
		if(input>=0 && input<=9){
		count[input] ++;}
		scanf("%d",&input);
		printf("\n");
	}
	
	for (i=0;i<9;i++){
	printf("%d, ",count[i]);
    }
    printf("%d",count[9]);
	
}
