#include <stdio.h>

int cal(int n,int cnd);

int main(){
    int result;
    result =cal(1,1);
    printf("5!= %d", result);
}

//recursion
int cal(int n,int cnd){
    if(cnd>5){
        return n;
    }else{
        n *= cnd;
        return cal(n,cnd+1);
    }
}