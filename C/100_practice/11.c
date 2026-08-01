#include <stdio.h>
#include <math.h>

int isPrime(int x);

int main(){
	int k=101;
	int total=0;
	for (k=101;k<=200;k++){
		if(isPrime(k)==1){
			total++;
			printf("%d, ",k);
		}
	}
	printf("\ntotal:%d",total);
} 

int isPrime(int x){
	int i,is;
	is = 1;
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0){
			is=0;
			break;
		}
	}
	return is;
}
