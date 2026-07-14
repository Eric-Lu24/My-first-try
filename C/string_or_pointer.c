#include <stdio.h>

int main(){
    char* str = "Hello,world!";
    //you can't modify the string with str[0] = 'h'; cause it's read-only
    printf("%s\n",str);

    //but you can use a char array~
    char str_ [] = "Hello,world!";
    str_[0] = 'h';
    printf("%s\n",str_);

    return 0;
}