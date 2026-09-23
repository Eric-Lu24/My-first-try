#include <stdio.h>

long long int cal(long long int n,long long int k,long long int pass){
    if(k>0){
        return cal(n,k-1,pass*n);
    }else{
        return pass;
    }
}

int main(){
    long long int n,k;
    printf("Input n for n^k\n");
    scanf("%lld",&n);
    printf("Input k for n^k\n");
    scanf("%lld",&k);
    printf("Result:%lld",cal(n,k,1));
}
