/*利用字母可以组成一些美丽的图形，下面给出了一个例子：
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
这是一个5行7列的图形，请找出这个图形的规律，并输出一个n行m列的图形。
输入格式
输入一行，包含两个整数n和m，分别表示你要输出的图形的行数的列数。
输出格式
输出n行，每行m个字符，为你的图形*/

#include <stdio.h>

int main(){
    char arr[10][10]={0,};
    int line=0,row=0;
    int i=0,j=0;
    printf("Lines&Rows(<=10)\n");
    scanf("%d %d",&line,&row);
    for(i=0;i<line;i++){
        for(j=0;j<row;j++){
            if(j<i){
                arr[i][j]='A'-j+i;
            }else{
                arr[i][j]='A'+j-i;
            }
        }
    }
    for(i=0;i<line;i++){
        for(j=0;j<row;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}
