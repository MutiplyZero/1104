#include <stdio.h>
#include <stdlib.h>
int square(int y);//宣告函式(接收一個整數y，回傳其平方值)
int main(void) {
	int x;
	for (x = 1; x <= 10; x++) {
		printf("%d ", square(x));
	}
	printf("\n");
	system("pause");
	return 0;
}
int square(int y)
{
	return y * y;
}