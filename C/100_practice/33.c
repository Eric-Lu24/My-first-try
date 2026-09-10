#include <stdio.h>

int main(){
    int i=0,j=0;
    int arr[3][3];
    int what;
    int add=0;
    printf("input an array(3*3):\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&what);
            arr[i][j]=what;
        }
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++){
        add += arr[i][i];
        add += arr[i][2-i];
    }
    printf("%d",add);
}