#include <stdio.h>

int main(void)
{
	int x, y;

	while (scanf_s("%d",&x) != EOF) {
		scanf_s("%d", &y);

		printf("%d\n", x + y);
	}

	return 0;
}