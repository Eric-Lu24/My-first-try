#include <stdio.h>

int main(){
    int arr[10][10]={};
    int i=0,j=0;
    for(i=0;i<10;i++){
        j=0;
        arr[i][j]=1;
        j=i;
        arr[i][j]=1;
    }
    for(i=2;i<10;i++){
        for(j=1;j<i;j++){
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<=i;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}