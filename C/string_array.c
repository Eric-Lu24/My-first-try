# include <stdio.h>

int main(void){
    char *str[]={"Hello",",","world","!",};
    printf("%s%s%s%s\n",str[0],str[1],str[2],str[3]);

    char word[8];
    scanf("%7s",word);
    printf("%s\n",word);
    //add a number before the %s to set the minimum width
    return 0;
}