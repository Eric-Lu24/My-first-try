#include <stdio.h>

int main(){
    int a,b,c;
    for(a=0;a<=20;a++){
        for(b=0;b<=33;b++){
            c=100-a-b;
            if(a*5+b*3+c/3==100&&c%3==0){
                printf("cock:%d,hen:%d,chicken:%d\n",a,b,c);
            }
        }
    }
}