#include <stdio.h>

int main(void)
{
	int num, max = 0, second = 0;

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &num);
		if (num >= max) {
			second = max;
			max = num;
		}
		else if (num < max) {
			if (num > second)
				second = num;
		}
	}
	printf("%d\n", second);

	return 0;
}