#include<stdio.h>

int main(){
    int n;
    printf("Size?");
    scanf("%d",&n);
    int i,j;
    for(j=1;j<=n;j++){
        for(i=n;i>=j;i--){
            printf(" ");
        }
        for(i=1;i<=j*2-1;i++){
            printf("*");
        }
        printf("\n");
    }
    for(j=n-1;j>=1;j--){
        for(i=n;i>=j;i--){
            printf(" ");
        }
        for(i=1;i<=j*2-1;i++){
            printf("*");
        }
        printf("\n");
    }
}