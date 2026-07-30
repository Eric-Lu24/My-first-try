#include <stdio.h>

struct comeon{
    int apple;
    int banana;
    int peach;
};


int main (){
    struct comeon hello[] = {{12,10,20},{30,40,50},{1888,666,988},};
    int i=0;
    printf("We have:\n");
    for(i=0;i<3;i++){
        printf("Apples:%d Bananas:%d Peaches:%d\n",hello[i].apple,hello[i].banana,hello[i].peach);
    }
}