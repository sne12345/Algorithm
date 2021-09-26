#include <stdio.h>

int main(void)
{
	int x, sum;

	scanf_s("%d", &x);

	sum = 0;
	for (int i = 1; i <= x; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	return 0;
}