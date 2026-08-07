#include <stdio.h>
#include <math.h>

int main(){
    int i,j,add;
    for(i=2;i<=1000;i++){
        add=1;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                add += j;
                add += i/j;
            }
        }
        if(add==i){
            printf("%d ",i);
        }
    }
}