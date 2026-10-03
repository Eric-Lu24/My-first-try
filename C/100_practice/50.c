#include <stdio.h>

void Recursion(char *str,int cnt){
    if(*str=='\0'){
        printf("Length:%d",cnt);
        return;
    }else{
        Recursion(str+1,cnt+1);
    }
}

int cal(char*str){
    int cnt=0;
    while(*str!='\0'){
        str++;
        cnt++;
    }
    return cnt;
}

int main(){
    char str[100];
    int mode=0;
    scanf("%99s",str);
    printf("Mode?(1 Recursion,2 Common)\n");
    scanf("%d",&mode);
    if(mode==1){
        Recursion(str,0);
    }else if(mode==2){
        printf("Length:%d",cal(str));
    }else{
        printf("?\n");
    }
}
