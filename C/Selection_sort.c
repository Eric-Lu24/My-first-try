#include <stdio.h>

int main(){
    int arr[]={32,15,9,87,100,0,2,1,66};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i=len-1,j=0;
    int maxis,temp;
    for(i=len-1;i>=0;i--){
        maxis=0;
        for(j=1;j<=i;j++){
            if(arr[maxis]<arr[j]){
                maxis=j;
            }
        }
        temp=arr[maxis];
        arr[maxis]=arr[i];
        arr[i]=temp;
    }

    for(j=0;j<len;j++){
        printf("%d ",arr[j]);
    }
}