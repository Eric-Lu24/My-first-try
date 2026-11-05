#include <stdio.h>
int main(){
    FILE *fp = fopen("chicken.c","r");
    if(fp){
        int num;
        fscanf(fp,"%d",&num);
        printf("%d\n",num);
        fclose(fp);
    }else{
        printf("None\n");
    }

    return 0;
}