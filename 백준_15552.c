#include <stdio.h>

int main(void)
{
	int num, x, y;

	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		printf("%d\n", x + y);
	}

	return 0;
}