#include <stdio.h>

struct date{
    int year;
    int month;
    int day;
};

struct date */*return a pointer to struct*/input(struct date *a){
    scanf("%d",&(a->year));
    scanf("%d",&(a->month));
    scanf("%d",&(a->day));
    return a;
}

void output(struct date mydate){
    printf("%d.%d.%d",mydate.year,mydate.month,mydate.day);
}

int main(){
    struct date mydate={0,0,0};
    input(&mydate);
    output(mydate);
}