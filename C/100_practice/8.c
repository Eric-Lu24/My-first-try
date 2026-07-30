#include <stdio.h>

int main(){
    const int length = 8;
    int x,y;
    for (x=0;x<length;x++){
        for (y=0;y<length;y++){
            if ((y+x)%2==0){
                printf("W ");
            }else{
                printf("B ");
            }
        }
        printf("\n");
    }
    return 0;
}