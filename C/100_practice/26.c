#include <stdio.h>

int cal(int x,int y,int i);
int min(int x,int y);

int main(){
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);
    printf("Result:%d",cal(x,y,min(x,y)));
}

int cal(int x,int y,int i){
    if(x%i==0 && y%i==0){
        return i;
    }else{
        return cal(x,y,i-1);
    }
    
}

int min(int x,int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}