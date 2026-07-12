#include <stdio.h>

int main (){
    int arr[]={0,1,2,3,4,5};
    int *p = arr;
    int *q = &arr[5];
    printf("divide:%d\n",(int)(q-p));
    printf("sizeof(p):%d",(int)sizeof(p));
}