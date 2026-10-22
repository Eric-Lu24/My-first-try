//copy the answer(recursion)：Tower of Hanoi
//different from the standard solution, this is a mathematical solution

#include <stdio.h>

int Recursion(int n){
    if(n==1)
        return 1;
    else
        return 2*Recursion(n-1)+1;
}


int main(){
    int n;
    printf("n=?\n");
    scanf("%d",&n);
    printf("%d steps\n",Recursion(n));
}