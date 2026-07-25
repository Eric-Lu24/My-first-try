#include <stdio.h>

int main(){
    int a=1,b=1;
    const int max=9;
    for (a=1;a<=max;a++){
        for (b=1;b<=a;b++){
            printf("%dx%d=%d ",a,b,a*b);
        }
        printf("\n");
    }
    return 0;
}