#include <stdio.h>

struct students{
    char *name;
    int grade;
    int sex;
};

int main(){
    char name[100];
    int grade,sex;
    printf("Name?\n");
    scanf("%s",name);
    printf("Grade?\n");
    scanf("%d",&grade);
    printf("Sex?(0 girl,1 boy)\n");
    scanf("%d",&sex);
    struct students user={name,grade,sex};
    if(user.sex==0){
        printf("Name:%s\nGrade:%d\nSex:Girl\n",user.name,user.grade);
    }else if(user.sex==1){
        printf("Name:%s\nGrade:%d\nSex:Boy\n",user.name,user.grade);
    }else{
        printf("Wow......");
    }
    
}