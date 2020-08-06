#include <stdio.h>

int main(void)
{
	int num, num1, array[10] = { 0,0,0,0,0,0,0,0,0,0 };

	scanf_s("%d", &num);
	num1 = 0;

	for (int k = 1; k <= num; k++) {
		num1 = k;
		while (num1 != 0) {
			for (int i = 0; i < 10; i++) {
				if (num1 % 10 == i) {
					array[i] += 1;
					break;
				}
			}
			num1 = num1 / 10;
		}
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", array[i]);

	return 0;
}