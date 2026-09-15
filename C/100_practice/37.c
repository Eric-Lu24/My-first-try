#include <stdio.h>
#include <math.h>

int main(){
    int input,mode,num,result=0;
    int cnt=0;
    printf("input:1. 2->10 2. 10->2\n");
    scanf("%d",&input);
    if(input!=1&&input!=2){
        printf("error");
        return 0;
    }else{
        mode=input;
    }
    if (mode==1){
        scanf("%d",&num);
        while(num>0){
            result += num%10*(int)pow(2,cnt);
            cnt++;
            num/=10;
        }
        printf("%d",result);
    }
    if(mode==2){
        scanf("%d",&num);
        while(num>0){
            result += num%2*(int)pow(10,cnt);
            cnt++;
            num/=2;
        }
        printf("%d",result);
    }
}

