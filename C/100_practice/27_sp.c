#include <stdio.h>

//Stack LIFO!!!
void func(int n);
int main(){
    int n=5;
    printf("(No space)\n");
    func(n);
}

void func(int n){
    char x;
    if(n<=1){
        x=getchar();
        putchar(x);
    }else{
        x=getchar();
        func(n-1);
        putchar(x);
    }
}