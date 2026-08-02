#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int input=0;
    scanf("%d",&input);
    for (a=2;a<=sqrt(input);a++){
        if (input%a==0){
            printf("%d*",a);
            input/=a;
            a=1;
        }
    }
    printf("%d\n", input);
}