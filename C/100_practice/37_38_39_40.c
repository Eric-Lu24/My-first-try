#include <stdio.h>
#include <math.h>

int main(){
    int mode1,mode,num,result=0;
    int cnt=0;
    printf("now:\n");
    scanf("%d",&mode1);
    printf("expected:\n");
    scanf("%d",&mode);
    printf("Your number:\n");
    scanf("%d",&num);
    while(num>0){   
        result += num%mode*(int)pow(mode1,cnt);
        cnt++;
        num/=mode;
    }
    
    printf("result:%d",result);
}


