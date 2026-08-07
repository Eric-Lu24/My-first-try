#include <stdio.h>
#include <math.h>
int main(){
    int n,x,result,i;
    result=0;
    printf("n=? x=?\n");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
        result += x*pow(10,n-i)*i;
    }
    printf("%d",result);
}