#include <stdio.h>

int main(){
    int input=0,cnt=0;
    printf("input a number for an array until -1(<100 items)\n");
    int arr[100];
    while(input!=-1&&cnt<=99){
        scanf("%d",&input);
        if(input!=-1){
            arr[cnt]=input;
            cnt++;
        }
       
    }
    printf("\n");
    
    int tempmax=arr[0],tempnum=0,i=0;
    for(i=0;i<cnt;i++){
        if(tempmax<arr[i]){
            tempmax = arr[i];
            tempnum = i;
        }
    }
    arr[tempnum]=arr[0];
    arr[0]=tempmax;

    int tempmin=arr[0];
    tempnum = 0;
    for(i=0;i<cnt;i++){
        if(tempmin>arr[i]){
            tempmin = arr[i];
            tempnum = i;
        }
    }
    arr[tempnum]=arr[cnt-1];
    arr[cnt-1]=tempmin;
    
    for(i=0;i<cnt;i++){
        printf("%d ",arr[i]);
    }
}
