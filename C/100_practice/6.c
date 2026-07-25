#include <stdio.h>

int main(){
    int size;
    int i=0;
    printf("What's the size of your \"C\" ?\n");
    scanf("%d",&size);
    for(i=0;i<size+2;i++){
        printf("*");
    }
    printf("\n");
    for(i=0;i<size;i++){
        printf("*\n");
    }
    for(i=0;i<size+2;i++){
        printf("*");
    }
    return 0;
}