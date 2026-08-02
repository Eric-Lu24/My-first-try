#include <stdio.h>

int main(){
    int a;
    char *result;
    scanf("%d",&a);
    if(a>=90){
        result = "A";
    }else if(a>=60){
        result = "B";
    }else{
        result = "C";
    }
    printf("%s",result);
    return 0;
}
