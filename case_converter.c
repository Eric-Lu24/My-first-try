#include <stdio.h>

int main(){
    printf("请输入要转换大小写的字母：\n");
    char ch;
    scanf("%c", &ch);
    if(ch >= 'a' && ch <= 'z'){
        ch -= 'A'-'a';
        printf("转换结果为%c\n",ch);
    }else if(ch >= 'A' && ch <= 'Z'){
        ch += 'A'-'a';
        printf("转换结果为%c\n",ch);
    } else{
        printf("哥们输入了啥玩意？\n");
    }
    
}