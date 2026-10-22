#include <stdio.h>

int main(){
    int n=0;
    printf("n=?\n");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%dx%d=%d ",j,i,i*j);
        }
        printf("\n");
    }
}

