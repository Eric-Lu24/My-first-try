#include <stdio.h>
void swapit(int *m,int *n){
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int *x,*y,*z;
    x=&a;y=&b;z=&c;
    if(a<b){
        swapit(x,y);
    }
    if(a<c){
        swapit(x,z);
    }
    if(b<c){
        swapit(y,z);
    }
    printf("%d %d %d",*x,*y,*z);
}