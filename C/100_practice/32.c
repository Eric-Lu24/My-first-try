#include <stdio.h>

int main(){
    char* str,* str2;
    scanf("%1s",str);
    switch(*str){
        case 'm':
        case 'M':
            printf("Monday\n"); break;
        case 'w':
        case 'W':
            printf("Wednesday\n");break;
        case 'f':
        case 'F':
            printf("Friday\n"); break;
        case 't':
        case 'T':
            scanf("%1s",str2);
            if(*str2=='u'||*str2=='U'){
                printf("Tuesday\n");
            }else if(*str2=='h'||*str2=='H'){
                printf("Thursday\n");
            }else{
                printf("Invalid input\n");
            }break;
        case 's':
        case 'S':
            scanf("%1s",str2);
            if(*str2=='a'||*str2=='A'){
                printf("Saturday\n");
            }else if(*str2=='u'||*str2=='U'){
                printf("Sunday\n");
            }else{
                printf("Invalid input\n");
            }break;
        default:
            printf("Invalid input\n");
    }
}

