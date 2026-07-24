#include <stdio.h>

void com (int *a,int *b){
    int temp;
    if (*a>*b){
        temp=*a;
        *a=*b;
        *b=temp;
    }
}

int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    com(&x,&y);
    com(&y,&z);
    com(&x,&z);
    printf("%d %d %d",x,y,z);
}

