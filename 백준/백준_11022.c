#include <stdio.h>

int main(void)
{
	int num, x, y;

	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		printf("Case #%d: %d + %d = %d \n", i, x, y, x + y);
	}

	return 0;
}