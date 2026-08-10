#include <stdio.h>

int a,b;
//if I don't initialize a&b, they will be 0

void swapf();

int main(){
    printf("two numbers:");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    swapf();
    printf("a=%d b=%d\n",a,b);
}

void swapf(){
    int c;
    c=a;
    a=b;
    b=c;
}