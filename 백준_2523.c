#include <stdio.h>

int main(void)
{
	int num;

	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	for (int i = num; i > 1; i -- ) {
		for (int j = 1; j < i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}