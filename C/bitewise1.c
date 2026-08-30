#include <stdio.h>

int main(){
    int x=3;//011
    int y=6;//110
    printf("%d\n",x&y);//010
    printf("%d\n",x|y);//111
    printf("%d\n",x^y);//101
    printf("%d\n",y>>1);//011
}