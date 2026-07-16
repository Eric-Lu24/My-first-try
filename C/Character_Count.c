#include <stdio.h>
#include <ctype.h>

int main(){
    int space,num,letter,other;
    int input; /* use int to hold EOF from getchar() */
    space = num =letter =other =0;
    /* read characters until newline or EOF */
    while((input = getchar()) != '\n'){
        if (isalpha(input)){
            letter++;
        }
        else if (isdigit(input)){
            num++;
        }
        else if (isspace(input)){
            space++;
        }
        else{
            other++;
        }
    }
    printf("\nOutcome------\n");
    printf("Letters: %d\n", letter);
    printf("Digits: %d\n", num);
    printf("Spaces: %d\n", space);
    printf("Other: %d\n", other);
    return 0;
}