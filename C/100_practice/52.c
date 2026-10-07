#include <stdio.h>

void Recursion(int n){
    if(n>0){
        printf("%d\n",n%10);
        Recursion(n/10);
    }else{
        return;
    }
}

int main(){
    int n=0;
    scanf("%d",&n);
    Recursion(n);
}

