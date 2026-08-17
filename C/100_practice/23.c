#include <stdio.h>

int main(){
    int a=1,b=1,c,i;
    double total=0;
    for(i=0;i<20;i++){
        c=a+b;
        total += (double)c/(double)b;
        a=b;
        b=c;
    }
    printf("Total: %.6lf\n", total);
}