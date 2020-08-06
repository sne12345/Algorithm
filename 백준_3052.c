#include <stdio.h>

int main(void)
{
	int num, remain[42] = { 0, }, count = 0;

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num);
		num = num % 42;
		remain[num]++;
	}
	for (int i = 0; i < 42; i++) {
		if (remain[i] > 0)
			count++;
	}
	printf("%d\n", count);

	return 0;
}