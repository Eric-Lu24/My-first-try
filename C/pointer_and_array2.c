#include <stdio.h>

int main (){
    int arr[]={0,1,2,3,4,5};
    int *p = arr;
    printf("*p=%d,p=%p\n",*p,p);
    p++;
    printf("*p'=%d,p'=%p\n",*p,p);
}