#include <stdio.h>
#include <stdlib.h>
int square(int y);//�ŧi�禡(�����@�Ӿ��y�A�^�Ǩ䥭���)
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