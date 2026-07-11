#include <stdio.h>

void maxandmin(int arr[],int len,int *max,int *min);
/*declaration
the first time using pointer*/ 

int main(){
	int arr[]={21,45,128,99,10,6,2,35,};
	int max,min;
	maxandmin(arr,sizeof(arr)/sizeof(arr[0]),&max,&min);
	printf("max=%d,min=%d\n",max,min);
	return 0;
}

void maxandmin(int arr[],int len,int *max,int *min){
	*max = arr[0];
	*min = arr[0];
	int i;
	for (i=0;i<len;i++){
		if (arr[i]>*max){
			*max = arr[i];
		}
		if (arr[i]<*min){
			*min = arr[i];
		} 
	}
}
//definition 


