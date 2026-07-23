#include <stdio.h>

enum color{red,blue,green,yellow};

int main(){
	int color;
	char *name=NULL;
	//char for a single character, char* point to a string
	//MUST DEFINITE IT AS A "NULL" BEFORE USE IT
	printf("Which is the number of your favourite color?\n(0:red,1:blue,2:green,3:yellow)\n");
	scanf("%d",&color);
	switch(color){
		case red:name="red";break;
		case blue:name="blue";break;
		case green:name="green";break;
		case yellow:name="yellow";break;
		default:name="What?";
	}
	printf("%s\n",name);
	//the whole string
} 
