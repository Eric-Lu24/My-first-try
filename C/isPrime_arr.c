#include <stdio.h>

int isPrime (int input);

int main(){
	int list[199] = {0,};
	int i;
	for (i=0;i<199;i++){
		if (isPrime(i+2)==1){
			list[i] = 1;
		}
	}
	for (i=0;i<199;i++){
		if (list[i] == 1){
			printf("%d ",i+2);
		}
	}
}

int isPrime(int input){
	int k;
	if (input < 2) {
		return 0;
	}
	//maths
	for (k = 2; k * k <= input; k++){
		if (input % k == 0){
			return 0;
		}
	}
	return 1;
}
