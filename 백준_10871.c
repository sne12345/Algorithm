#include <stdio.h>

int main(void)
{
	int num, x, value;

	scanf_s("%d", &num);
	scanf_s("%d", &x);

	for (int i = 0; i < num; i++) {
		scanf_s("%d", &value);
		if (value < x)
			printf("%d ", value);
	}

	return 0;
}