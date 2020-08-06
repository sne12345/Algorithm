#include <stdio.h>

int main(void)
{
	int num, num1 = 0, num2 = 0;

	scanf_s("%d", &num);
	for (int i = 2 * num; i > 0; i -= 2) {
		for (int k = 0; k < num1; k++) {
			printf(" ");
		}
		num1++;
		for (int j = 1; j < i; j++)
			printf("*");
		printf("\n");
	}
	for (int i = 0; i < 2*num; i+=2) {
		if (i != 0) {
		for (int k = num1-2; k > 0; k--)
			printf(" ");
			num1--;
			for (int j = 0; j <= i; j++)
				printf("*");
			printf("\n");
		}
	}

	return 0;
}