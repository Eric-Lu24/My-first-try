#include <stdio.h>
#include <stdlib.h>

void game();
int main(){
    int mode;
    printf("Guessing game(1 play,2 exit)\n");
    scanf("%d",&mode);
    if(mode==1){
        game();
    }else{
        printf("Goodbye~");
        return 0;
    }
}

void game(){
    int level,cnd=0,input=-1,chance;
    int tar=rand()%99+1;
    //int tar=50;(test)
    printf("Choose your level(1 Easy,2 Normal,3 Hard)\n");
    scanf("%d",&level);
    while(level!=1&&level!=2&&level!=3){
        printf("Try again(1 Easy,2 Normal,3 Hard)\n");
        scanf("%d",&level);
    }    
    chance = 20-level*5;

    do{
        printf("Guess?");
        scanf("%d",&input);
        if(input>tar){
            cnd++;
            printf("Yours is bigger.(%d times left)\n",chance-cnd);
        }else if (input<tar){
            cnd++;
            printf("Yours is smaller.(%d times left)\n",chance-cnd);
        }
        
    }while(cnd<chance && input!=tar);
    
    if(input==tar){
        printf("Good job~");
    }else{
        printf("lose :(");
    }
}