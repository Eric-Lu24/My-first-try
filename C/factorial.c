#include <stdio.h>

//declaration
int calculate(int a); 

int main(){
	int input;
	scanf("%d",&input);
	printf("result = %d",calculate(input));
}

//definition
int calculate(int a){
	int i,output;
	output = 1;
	for(i=a;i>1;i--){
		output *= i;
	}
	return output;
}
