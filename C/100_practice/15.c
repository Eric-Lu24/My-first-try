#include <stdio.h>
#include <math.h>

int max(int a,int b){
    return a>b?a:b;
}

int min(int a,int b){
    return a<b?a:b;
}

int main(){
    int m,n;
    int i,j;
    scanf("%d %d",&m,&n);
    for (i=(min(m,n));i>=1;i--){
        if (m%i==0 && n%i==0){
            printf("%d\n",i);
            break;
        }
    }
    for (j=max(m,n);j<=m*n;j++){
        if (j%m==0 && j%n==0){
            printf("%d\n",j);
            break;
        }
    }
    return 0;
}
