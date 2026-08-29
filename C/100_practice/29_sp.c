#include <stdio.h>

int ArrMax(int arr[],int length);

int main(){
    int arr[]={2,40,18,99,65,10,0};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("%d", ArrMax(arr, len - 1));
}

int ArrMax(int arr[],int length)
{
	if (length==0)
	{
		return arr[0];
	}else{
		if (arr[length] > ArrMax(arr, length - 1))
		{
			return arr[length];
		}else{
			return ArrMax(arr, length - 1);
		}
	}
}