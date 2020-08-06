#include <stdio.h>

int main(void)
{
	int price, min = 2000, sum = -50;

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &price);
		if (price < min)
			min = price;
	}
	sum += min;

	min = 2000;
	for (int i = 0; i < 2; i++) {
		scanf_s("%d", &price);
		if (price < min)
			min = price;
	}
	sum += min;

	printf("%d\n", sum);

	return 0;
}
