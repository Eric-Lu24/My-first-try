#include <stdio.h>

void reverse_string(char* string){
    if (*string == '\0') {
        return;
    }
    reverse_string(string + 1);
    printf("%c", *string);
}

int main(){
    char input[101];
    scanf("%100s", input);
    reverse_string(input);
    return 0;
}

