#include <stdio.h>

int search(int a[],int len,int tar){
    int result=-1;
    int i=0;
    for(i=0;i<len;i++){
        if(a[i]==tar){
            result=i;
            break;
        }
    }
    return result;
}

int main(){
    int tar;
    int a[]={31,5,4,2,1,89,56,7,10,100};
    printf("Your target number?\n");
    scanf("%d",&tar);
    if(search(a,sizeof(a)/sizeof(a[0]),tar)!=-1){
        printf("Yes");
    }else{
        printf("No");
    }
}