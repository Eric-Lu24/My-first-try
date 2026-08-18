#include <stdio.h>

void mov1(int i){
    printf("mov1 %d",i);
}
void mov2(int i){
    printf("mov2 %d",i);
}
void mov3(int i){
    printf("mov3 %d",i);
}
int main(){
    int i=0,n=0;
    void (*f[])(int)={mov1,mov2,mov3};
    scanf("%d %d",&i,&n);
    if(i>0 && i<=(int)(sizeof(f)/sizeof(f[0]))){
        f[i-1](n);
    }
}