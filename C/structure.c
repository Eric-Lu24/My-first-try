#include <stdio.h>

struct character{
    char *level;
    int age;
    int excellent;
};

int main(){
    struct character Amy ={"A",18,1};
    struct character Tim;
    Tim.level = "B";
    Tim.age = 20;
    Tim.excellent = 0;
    printf("Amy:%s %d %d\n",Amy.level,Amy.age,Amy.excellent);
    printf("Tim:%s %d %d\n",Tim.level,Tim.age,Tim.excellent);
}