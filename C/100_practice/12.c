#include <stdio.h>

int main(){
	int a,b,c;
	int output,cnt=0;
	for (a=1;a<=9;a++){
		for(b=0;b<=9;b++){
			for(c=0;c<=9;c++){
				output = 100*a+10*b+1*c;
				if (output==a*a*a+b*b*b+c*c*c){
					printf("%d, ",output);
					cnt++;
				} 
			}
		}
	}
	printf("\nTotal:%d",cnt);
} 
