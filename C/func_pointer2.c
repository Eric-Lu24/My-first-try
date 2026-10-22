#include <stdio.h>

int plus(int a,int b){
    return a+b;
}

int mult(int x,int y){
    return x*y;
}


int main(){
    int (*p)(int,int) = nullptr;
    int a=3,b=5;
    p = plus;
    printf("%d\n",p(a,b));
    p = mult;
    printf("%d\n",p(a,b));
}