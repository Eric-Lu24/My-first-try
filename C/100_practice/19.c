#include <stdio.h>

int main(){
    double x=100,total=-100;
    int i;
    for(i=1;i<=10;i++){
        total += x*2;
        x /=2;
    }
    printf("total:%.4f\n",total);
    printf("next max:%.4f",x);
}
