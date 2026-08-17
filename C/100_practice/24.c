#include <stdio.h>

int main(){
    //int: overflow occurs
    long long int i,j,s;
    long long int result=0;
    for (i=1;i<=20;i++){
        s=1;
        for (j=1;j<=i;j++){
            s *= j;
        }
        result += s;
    }
    printf("Result:%lld",result);
}
