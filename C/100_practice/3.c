#include <stdio.h>
#include <math.h>
int main(){
	int i=1;
	for (i=1;i>0;i++){
		if((int)sqrt(i+100) == sqrt(i+100) && (int)sqrt(i+168) == sqrt(i+168)){
			goto Out;
		}
	}
	Out:printf("The number is %d",i);
} 
