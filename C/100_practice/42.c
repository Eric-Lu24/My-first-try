#include <stdio.h>

int lookfor(int target,int arr[],int len){
    int num=-1,i=0;
    for(i=0;i<len;i++){
        if(target==arr[i]){
            num=i;
            break;
        }
    }
    return num;
}

int main(){
    int target;
    int arr[]={0,5,2,1,3,4,6,7,8,9,5,2,1,8,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("Want to find____?\n");
    scanf("%d",&target);
    if(lookfor(target,arr,len)!=-1){
        printf("No.%d in the list(from 0)\n",lookfor(target,arr,len));
    }else{
        printf("None\n");
    }
}
