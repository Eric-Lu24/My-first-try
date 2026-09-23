#include <stdio.h>

int Digitsum(int x){
    if(x>0){
        return x%10+Digitsum(x/10);
    }else{
        return 0;
    }
}

int main(){
    int x;
    printf("Input a number\n");
    scanf("%d",&x);
    printf("%d",Digitsum(x));
}
