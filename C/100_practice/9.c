#include <stdio.h>

int main() {
	int i,j;
	SetConsoleOutputCP(437); // 设置控制台编码为437

	printf(":):)\n"); 

	for (i = 2; i <= 10; i++) { 
		for (j = 1; j <= i; j++) { 
			printf("%c%c", 219, 219);
		}
		printf("\n");
	}
	return 0;
}
