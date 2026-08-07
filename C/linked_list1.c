#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node* next;
}Node;

int main(){
    Node*head = NULL;
    while(1){
    printf("Add value to Node:(-1 exit)\n");
    scanf("%d", &head->value);
    }

}