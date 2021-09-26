#include <stdio.h>

int main(void)
{
	int num, A, B;

	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf_s("%d", &A);
		scanf_s("%d", &B);
		printf("%d\n", A + B);
	}

	return 0;
}