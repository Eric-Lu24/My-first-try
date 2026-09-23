#include <stdio.h>

int Recursion(int n,int a,int b){
    if(n==1){
        return a;
    }else if(n==2){
        return b;
    }
    return Recursion(n-1,b,a+b);
}

int Normal(int n){
    int x=1,y=1,z=2,i=3;
    while(i<=n){
        z=x+y;
        x=y;
        y=z;
        i++;
    }
    if(n==1||n==2){
        return 1;
    }else{
        return z;
    }
}

int ask(){
    int temp;
    printf("The number?\n");
    scanf("%d",&temp);
    return temp;
}

int main(){
    int mode;
    printf("Your mode?(1.Recursion 2.Normal)\n");
    scanf("%d",&mode);
    if(mode==2){
        printf("Result:%d\n",Normal(ask()));
    }else if(mode==1){
        printf("Result:%d\n",Recursion(ask(),1,1));
    }else{
        printf("?");
    }
}