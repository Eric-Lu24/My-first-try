#include <stdio.h>

int main(){
    int num,num_;
    printf("Enter a number(max:5 digits):\n");
    scanf("%5d",&num);
    num_ = num;
    int cnt = 0;
    while(num!=0){
        num/=10;
        cnt++;
    }
    printf("%d digits\n",cnt);
    int i;
    for(i=1;i<=cnt;i++){
        printf("%d",num_%10);
        num_ /=10;
    }
}
