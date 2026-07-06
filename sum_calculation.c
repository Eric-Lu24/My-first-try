#include <stdio.h>

void sum(int start, int end){
    int result =0;
    for (int i=start;i<=end;i++){
        result += i;
    }
    printf("sum = %d\n",result);
}

int main(){
    int s,e;
    scanf("%d %d",&s,&e);
    sum(s,e);
}