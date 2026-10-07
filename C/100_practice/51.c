#include <stdio.h>

void Recursion(int n,int total){
    if(n<=0){
        printf("Result:%d",total);
        return;
    }else{
        Recursion(n-1,total*n);
    }
}

int normal(int n){
    int total=1;
    while(n>1){
        total*=n;
        n--;
    }
    return total;
}


int main(){
    int n=0;
    int mode=0;
    printf("n?\n");
    scanf("%d",&n);
    printf("Mode?(1 Recursion,2 Common)\n");
    scanf("%d",&mode);
    if(mode==1){
        Recursion(n,1);
    }else if(mode==2){
        printf("Result:%d",normal(n));
    }else{
        printf("?");
    }
}