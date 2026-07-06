#include <stdio.h>

int main(){
	double f;
	double x;
	printf("输入该分段函数横坐标：\n");
	scanf("%lf",&x);
	
	int type=(x!=0)+(x>0)+1;
	switch(type){
		case 1:
			f = 0;
			break;
		case 2:
			f = -1;
			break;
		case 3:
			f = 2*x;
			break;
	}
	printf("%f",f);
}
