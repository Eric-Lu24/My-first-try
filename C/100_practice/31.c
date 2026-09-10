#include <stdio.h>

int main(){
    int x=0;
    printf("input a number(5 digits):\n");
    scanf("%5d",&x);
    if(x%10==x/10000 && (x/10)%10==(x/1000)%10){
        printf("yes\n");
    }else{
        printf("no\n");
    }
}