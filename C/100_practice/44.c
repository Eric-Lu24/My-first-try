#include <stdio.h>

int Dichotomy(int tar,int arr[],int len){
    int ret=-1;
    int left=0,right=len-1;
    int mid=(left+right)/2;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==tar){
            ret=mid;
            break;
        }else if(arr[mid]<tar){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return ret;
}

int main(){
    int tar;
    int arr[]={1,4,9,10,15,26,47,58,79,100};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("Target:____?(1~10)\n");
    scanf("%d",&tar);
    if(Dichotomy(tar,arr,len)==-1){
        printf("None\n");
    }else{
        printf("No.%d in the array\n",Dichotomy(tar,arr,len)+1);
    }
}
